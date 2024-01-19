#include <ESP8266Firebase.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>

#define ssid "Co Breakout"
#define password "PowerPoint"

void setup()
{
    Serial.begin(115200);
    WiFi.getmode(WiFi.STATION);
    WiFi.begin(ssid, password);
    Serial.print("connecting");
    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print("*");
        delay(1000);
    }
    server.on("/", []()
              { server.send(200, "text/plain", "Hello Para Warrior IoT"); });
    server.begin();
    Serial.print("Web Server Berjalan");
}

void loop()
{
    // server.handleClient();
}