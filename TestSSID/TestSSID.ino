#include <ESP8266WiFi.h>        //  Wi-Fi library
char *ssid = "WIFI GRATIS"; //nama SSID
char *password = "123456789";   // password SSID
void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.println('\n');
WiFi.softAP(ssid);       //Memulai membuat acces point
  Serial.print("Access Point \"");
  Serial.print(ssid);
  Serial.println("\" started");
Serial.print("IP address:\t");
  Serial.println(WiFi.softAPIP());         // Melihat IP addres nodemcu menggunakan serial monitor
}
void loop() { }