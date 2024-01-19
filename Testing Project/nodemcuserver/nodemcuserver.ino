// ==========Import Libraries===========
#include <WiFiClient.h>
#include <ESP8266WiFi.h>
#include <ESP8266Firebase.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
// =========Variable=============
String ssid = "Co Breakout";
String password = "PowerPoint";
ESP8266WebServer server(80);
// End Variabel
//==================================
// Function Connect Wifi
void connect_wifi()
{
    WiFi.getmode(WiFi.STATION);
    WiFi.begin(ssid, password);
    Serial.print("connecting");
    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print("*");
        delay(1000);
    }
}
// End Connect WiFI
// =================================
void setup()
{
    connect_wifi();
    Serial.begin(115200);

    server.on("/", []()
              { server.send(200, "text/plain", "Hello Para Warrior IoT"); });
    server.begin();
    Serial.print("Web Server Berjalan");
}

void loop()
{
    // server.handleClient();
}