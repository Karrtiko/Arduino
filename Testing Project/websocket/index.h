#ifndef WEBPAGE_H
#define WEBPAGE_H

const char *webpage = R"=====(
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Document</title>
  </head>
  <body>
    <div class="topnav">
      <h1>SENSOR READINGS (WEBSOCKET)</h1>
    </div>
    <div class="content">
      <div class="card-grid">
        <div class="card">
          <p class="card-title">
            <i
              class="fas fa-thermometer-threequarters"
              style="color: #059e8a"
            ></i>
            Temperature
          </p>
          <p class="reading"><span id="temperature"></span> &deg;C</p>
        </div>
        <div class="card">
          <p class="card-title">Humidity</p>
          <p class="reading"><span id="humidity"></span> &percnt;</p>
        </div>
        <div class="card">
          <p class="card-title">Pressure</p>
          <p class="reading"><span id="pressure"></span> hpa</p>
        </div>
      </div>
    </div>
    <script src="script.js"></script>
  </body>
</html>

)=====";

#endif