
#include "FirebaseESP8266.h"
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <SoftwareSerial.h>

#include "config.h"

FirebaseData firebaseData;

bool wifi_connected;
bool code_new = false;
SoftwareSerial __uart(D5, D6); /* (Rx - D5), (Tx - D6) */

int min_temp = 0;
int max_temp = 100;
int current_temp = 50;
int counter = 0;
String line_break = "*****************************************************************************";

void connectToWifi(void)
{
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
    Serial.println();
    Serial.println("CONNECTING TO WI-FI");

    /* Try to connect to Wi-Fi */
    for (int counter = 0; counter < WIFI_TIMEOUT_S; counter++)
    {
        Serial.print(".");
        wifi_connected = (WiFi.status() == WL_CONNECTED);
        if (wifi_connected)
        {
            Serial.println();
            Serial.print("CONNECTED TO WI-FI WITH IP: ");
            Serial.println(WiFi.localIP());
            Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
            Firebase.reconnectWiFi(true);
            Serial.print("CONNECTED TO FIREBASE");
            Serial.println();
            break;
        }
        delay(1000);
    }

    if (!wifi_connected)
    {
        Serial.println();
        Serial.println("COULD NOT CONNECT TO WI-FI");
    }

    Serial.println(line_break);
}

void checkFirebaseUpdates(void)
{
    if (wifi_connected)
    {
        bool changed = false;
        if (Firebase.getBool(firebaseData, "/data/config/minRequiredTemperatureChanged", changed))
        {
            if (changed)
            {
                Serial.println("MIN TEMP CHANGED");
                if (Firebase.getInt(firebaseData, "/data/config/minRequiredTemperature", min_temp))
                {
                    __uart.write(ID_MIN_TEMP);
                    __uart.write(min_temp);
                    Firebase.setBool(firebaseData, "/data/config/minRequiredTemperatureChanged", false);
                    Serial.print("MIN TEMP SENT ");
                    Serial.println(min_temp);
                }
                else
                {
                    Serial.println("FAILED TO READ MIN TEMP FROM FIREBASE");
                }
                Serial.println(line_break);
            }
        }
        else
        {
            Serial.println("FAILED TO READ MIN TEMP STATUS FROM FIREBASE");
            Serial.println(line_break);
        }

        if (Firebase.getBool(firebaseData, "/data/config/maxRequiredTemperatureChanged", changed))
        {
            if (changed)
            {
                Serial.println("MAX TEMP CHANGED");
                if (Firebase.getInt(firebaseData, "/data/config/maxRequiredTemperature", max_temp))
                {
                    __uart.write(ID_MAX_TEMP);
                    __uart.write(max_temp);
                    Firebase.setBool(firebaseData, "/data/config/maxRequiredTemperatureChanged", false);
                    Serial.print("MAX TEMP SENT ");
                    Serial.println(max_temp);
                }
                else
                {
                    Serial.println("FAILED TO READ MAX TEMP FROM FIREBASE");
                }

                Serial.println(line_break);
            }
        }
        else
        {
            Serial.println("FAILED TO READ MAX TEMP STATUS FROM FIREBASE");
            Serial.println(line_break);
        }
    }
}

void checkDataRecieved(void)
{
    int data = __uart.read();
    int c_temp = 0;

    switch (data)
    {
    case ID_MOTOR:
        Serial.println("SET MOTOR STATUS");
        setStatus("motor");
        Serial.println(line_break);
        break;

    case ID_COIL:
        Serial.println("SET COIL STATUS");
        setStatus("coil");
        Serial.println(line_break);
        break;

    case ID_SENSOR:
        Serial.println("SET SENSOR STATUS");
        setStatus("temperatureSensor");
        Serial.println(line_break);
        break;

    case ID_CURRENT_TEMP:
        Serial.println("SET CURRENT TEMP");
        counter = 0;
        current_temp = __uart.read();
        while (current_temp == -1 && counter < 100)
        {
            current_temp = __uart.read();
            delay(1);
            counter++;
        }

        if (Firebase.setInt(firebaseData, "/data/status/currentTemperature", current_temp))
        {
            __uart.write(ACK_TRUE);
            Serial.print("SET CURRENT TEMP TO ");
            Serial.print(current_temp);
            Serial.println(": SUCCESS");
        }
        else
        {
            __uart.write(ACK_FALSE);
            Serial.println("SET STATUS: FAILED");
        }
        Serial.println(line_break);
        break;

    case ID_MIN_TEMP:
        Serial.println("SEND MIN TEMP");
        sendTemperature("min");
        break;

    case ID_MAX_TEMP:
        Serial.println("SEND MAX TEMP");
        sendTemperature("max");
        break;

    default:
        break;
    }
}

void setStatus(String type)
{
    int status = __uart.read();
    counter = 0;
    while (status == -1 && counter < 100)
    {
        status = __uart.read();
        delay(1);
        counter++;
    }

    String status_str = "wrong";
    if (status == STATUS_ON)
    {
        status_str = "on";
    }
    else if (status == STATUS_OFF)
    {
        status_str = "off";
    }
    else
    {
        Serial.println("WRONG STATUS");
        Serial.println(status);
    }
    if ((status_str != "wrong") && (Firebase.setString(firebaseData, "/data/status/" + type, status_str)))
    {
        __uart.write(ACK_TRUE);
        Serial.println("SET STATUS " + status_str + ": SUCCESS");
    }
    else
    {
        __uart.write(ACK_FALSE);
        Serial.println("SET STATUS: FAILED");
    }
}

void sendTemperature(String type)
{
    int temp = 0;
    if (Firebase.getInt(firebaseData, "/data/config/" + type + "RequiredTemperature", temp))
    {
        __uart.write(temp);
        Serial.print("SEND TEMP ");
        Serial.print(temp);
        Serial.print(": SUCCESS");
    }
    else
    {
        __uart.write(temp);
        Serial.print("SEND TEMP: FAILED");
    }
}

void setup()
{

    Serial.begin(9600);
    __uart.begin(UART_BAUDRATE);
    connectToWifi();
}

void loop()
{
    checkDataRecieved();
    checkFirebaseUpdates();
}
