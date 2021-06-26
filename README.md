# Fishbowl_ESP_TivaC_IOT
## Content
1.	Abstract
2.	Introduction
3.	Hardware Components
4.	Software
5.	Connections
    a.	Between peripherals and TM4C Microcontroller
    b.	Between TM4C Microcontroller and ESP WIFI Module
    c.	TM4C Microcontroller
    d.	In the Real World
6.	Implementation Flowchart
7.	Firebase and NodeMCU
    a.	Firebase 
    b.	NodeMCU
    c.	Configurations
8.	Web Part
    a.	Languages Used
    b.	Technologies Used
    c.	How it works
    d.	Code Walkthrough
9.	Results
10.	BreadBoard connections 
11.	Conclusion
12.	References

## Abstract
This is an IOT device that control the temperature and DC motor based on the user settings using an ARM Cortex M4 based processor which is in TM4C123GH6PM Microcontroller Tiva C series and ESP8266 WIFI Module to connect to the Internet using C programming language for TM4C Micro, Arduino for ESP Module with HTML, JavaScript, CSS and firebase for Web.

## Introduction
In this project, we implement an IoT device using Google firebase and Website in web side and TM4C with ESP Microcontroller.
There are many third-party online servers and platforms available for showcasing the data of your IoT project. But, out of all of these platforms like ThingSpeak, Adafruit.io, Blynk, and IFTTT, etc., but we chose Firebase.


## Hardware Components 
-   TM4C123GH6PM Microcontroller Tiva C series
-   ESP8266 WIFI Module
-   Breadboard 
-   Relay SRD-05VDC-SL-C (2 units)
-   DC Motor
-   LM35 Temperature Sensor 
-   Caustic soldering as a heater
-   Resistor 160 Ω (2 units)
-   Connection Jumpers
-   2N2222A Transistor (2 units)


## Software
-   C programming Language
-   IAR Embedded Workbench IDE
-   HTML
-   JavaScript 
-   CSS
-   Firebase
-   Arduino
-   AJAX

## Connections
### 1-	Between ESP and TM4C Microcontroller
![alt text](https://github.com/MohamedOsamaAhmed/Fishbowl_ESP_TivaC_IOT/blob/main/ESP_Connections.jpg?raw=true)

### 2-  Between peripherals and TM4C Microcontroller
![alt text](https://github.com/MohamedOsamaAhmed/Fishbowl_ESP_TivaC_IOT/blob/main/design.PNG?raw=true)

### 3-	TM4C Microcontroller 
![alt text](https://github.com/MohamedOsamaAhmed/Fishbowl_ESP_TivaC_IOT/blob/main/Tm4c.PNG?raw=true)

## Implementation Flowchart
### This System is consisting of 2 functions 
1-	Periodic function every 1 second:
![alt text](https://github.com/MohamedOsamaAhmed/Fishbowl_ESP_TivaC_IOT/blob/main/1st%20FlowChart.png?raw=true)


2- Event Triggered Function when UART receive any new data
![alt text](https://github.com/MohamedOsamaAhmed/Fishbowl_ESP_TivaC_IOT/blob/main/2nd%20flowchart.png?raw=true)

## Firebase
Firebase provides a quick way to keep sensory data collected at the device level, and it works great with the Android APIs, which is supported by AndroidThings. A lot of mobile and device programmers that I have come across struggle with server-side programming. Firebase can really help bridge that gap and make it easier.
We created a Firebase Project to store our data in the format (Fig 1). The (config) part is to get data from website when the user changes it. The (status) is the status of each component and is updated when receiving from Tiva-C the status is changed.
![alt text](https://github.com/MohamedOsamaAhmed/Fishbowl_ESP_TivaC_IOT/blob/main/FIG1.png?raw=true)

We used “Firebase Realtime Database Arduino Library for ESP8266” which is open-source library supports many features like:
-  	Supports Read (get), Store (set), Append (push), Patch (update) and Delete Data.
-  	Supports Primitive data types: Integer, Float, Double, Boolean, String and JSON0
## NodeMCU
NodeMCU then sends the change in minimum or max temperature values to Tiva-C. and when there is any change in the state of any component, Tiva-C transmits the change to NodeMCU to write the changes in Firebase. The communication protocol between them is UART which we used (SoftwareSerial Library) which configures UART to send the data or receive the data. The library has many functions like read or write.

## Configurations
The user can configure the UART Baud Rate, WIFI-SSID or WIFI-Password and Ids of components. Fig 2 shows the configuration file of the project.
![alt text](https://github.com/MohamedOsamaAhmed/Fishbowl_ESP_TivaC_IOT/blob/main/FIG2.png?raw=true)

## The features and the development of the web interface used to communicate with the Tiva-C and NodeMCU.

## 1- Languages Used:
-  	HTML
-	CSS
-   Javascript
## 2- Technologies Used
-	Firebase
-	AJAX

## How it works:
1 - On page load, it displays the motor, coil and temperature sensor; whether they are on or off. It also displays the current temperature of the component.
![alt text](https://github.com/MohamedOsamaAhmed/Fishbowl_ESP_TivaC_IOT/blob/main/FIG3.png?raw=true)

2 - The web interface accepts the desired component configuration; these configurations are sent to the NodeMCU which in turn is used to control and talk to the Tiva-C.

![alt text](https://github.com/MohamedOsamaAhmed/Fishbowl_ESP_TivaC_IOT/blob/main/FIG4.png?raw=true)
## Code Walkthrough: 
Line 1: We first add a “DOMContentLoaded” event to the document, this ensures that all javascript code is run when all HTML elements have been successfully loaded, this helps prevents some errors when some JS code tries to access undefined elements

![alt text](https://github.com/MohamedOsamaAhmed/Fishbowl_ESP_TivaC_IOT/blob/main/FIG5.png?raw=true)

Line 2 - 17: This snippet adds necessary validation for the required temperature inputs, this ensures that the user will add a minimum required temperature that isn’t less than Zero, maximum required temperature to be not greater than 100.The above code snippet captures the users input for the desired required temperature and uploads.

![alt text](https://github.com/MohamedOsamaAhmed/Fishbowl_ESP_TivaC_IOT/blob/main/FIG6.png?raw=true)

it to Firebase’s real time database. The data is sent Then read by the NodeMCU.

![alt text](https://github.com/MohamedOsamaAhmed/Fishbowl_ESP_TivaC_IOT/blob/main/FIG7.png?raw=true)

This code snippets queries the Firebase database to get recent component configuration (motor, coil and temperature sensor state). Then it displays them for the user.

## Results
You can watch this video : https://www.youtube.com/watch?v=nvD4yI06u5g&ab_channel=MohamedOsama

## BreadBoard connections
You can watch this video : https://youtu.be/-OVu4ov5pZs

## Conclusion
ARM based Processor is more configurable than other processors beside TM4C has many peripherals than PIC and AVR which enabled us to think freely. Also, IOT is a great world for many ideas so we can control any thing from anywhere only we need internet and ESP WIFI Module then we are ready to write some codes in C, web and Arduino language to make our application ready to use. 

## References
•	http://shukra.cedt.iisc.ernet.in/edwiki/EmSys:TM4C123G_LaunchPad_UART_Interrupt_Programming
•	https://theorycircuit.com/spdt-relay-dpdt-relay/
•	https://github.com/jspicer-ltu/Tiva-C-Embedded/blob/master/Experiment3-GPIO-Relay/Experiment3-GPIO-Relay-circuit.png
•	Cortex-M4 Devices Generic User Guide
•	TivaC Series Development and Evaluation Kits for IAR Embedded Workbench
•	TM4C123_LaunchPadUsersManual
•	TM4C123GH6PM Datasheet
•	https://microcontrollerslab.com/uart-communication-tm4c123-tiva-c-launchpad/
•	http://shukra.cedt.iisc.ernet.in/edwiki/EmSys:TM4C123G_LaunchPad_-_Interfacing_LM35_Sensor
•	https://randomnerdtutorials.com/how-to-install-esp8266-board-arduino-ide/




