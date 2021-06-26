document.addEventListener("DOMContentLoaded", () => {
  document.querySelector("#save-button").addEventListener("click", () => {
    min_temp = parseInt(document.getElementById("min-temperature-value").value);
    max_temp = parseInt(document.getElementById("max-temperature-value").value);
    if (min_temp < 0) {
      alert(
        "Error: Minimum Required Temperature can't have a value less than 0"
      );
      return;
    }

    if (max_temp > 100) {
      alert(
        "Error: Maximum Required Temperature can't have a value greater than 100"
      );
      return;
    }
    const config = {
      minRequiredTemperature: min_temp,
      minRequiredTemperatureChanged: true,
      maxRequiredTemperature: max_temp,
      maxRequiredTemperatureChanged: true,
    };

    fetch(
      "https://tivac-2dde5-default-rtdb.europe-west1.firebasedatabase.app/data/config.json",
      {
        method: "PUT", // or 'PUT'
        headers: {
          "Content-Type": "application/json",
        },
        body: JSON.stringify(config),
      }
    )
      .then((response) => response.json())
      .then((data) => {
        console.log("Success:", data);
      });
  });

  fetch(
    `https://tivac-2dde5-default-rtdb.europe-west1.firebasedatabase.app/data/status.json`
  )
    .then((response) => response.json())
    .then((data) => {
      console.log(data);
      document.querySelector("#temperature-value").value =
        data["currentTemperature"];

      document.querySelector("#motor").checked =
        data["motor"] === "on" ? true : false;
      document.querySelector("#coil").checked =
        data["coil"] === "on" ? true : false;
      document.querySelector("#temp-sensor").checked =
        data["temperatureSensor"] === "on" ? true : false;
    })
    .catch((err) => console.log(err));
});
