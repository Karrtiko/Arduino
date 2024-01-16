#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <FirebaseArduino.h>

#define ssid "Co Breakout"
#define password "PowerPoint"
#define Firebase_Host "https://console.firebase.google.com/project/foras-d8f7b/database/foras-d8f7b-default-rtdb/data/~2F"
#define Firebase_Auth "s7Wl7N2FRYyVbfsPz5GuWjyaj4OKhCRhp7DDEEzd"


void setup() {
  Serial.begin(115200);
  // pinMode(LED_BUILTIN, OUTPUT);
  // digitalWrite(LED_BUILTIN, LOW);
  WiFi.begin(ssid,password);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(Firebase_Host, Firebase_Auth);
}

void loop() {
  // put your main code here, to run repeatedly:

}
