// ======Import Libraries================
#include <WiFiClient.h>
#include <ESP8266WiFi.h>
#include <ESP8266Firebase.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
// ===== Variable========================
String ssid = "Come";
String password = "huhuhuhu";
ESP8266WebServer server(80);
// ===== Function Connect Wifi ===========
void connect_wifi()
{
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);
    Serial.print("connecting");
    while (WiFi.status() != WL_CONNECTED)
    {
        Serial.print("*");
        delay(1000);
    }
    Serial.print("Connected to");
    Serial.print(ssid);
    Serial.print("IP address : ");
    Serial.println(WiFi.localIP());
}
// ===== MDNS Server ====================
void mdns()
{
    if (MDNS.begin("esp8266"))
    {
        Serial.print("MDNS started");
    }
}
// ===== Web Server =====================
void webserver()
{
    server.begin();
    Serial.print("web server Berjalan");
}
// ===== Setup =========================
void setup()
{
    Serial.begin(115200);
    connect_wifi();
    webserver();
    mdns();
}
// ===== Loop ===================
void loop()
{
    MDNS.update();
    server.handleClient();
}