#include <ESP8266WiFi.h>
#include <ESP8266Firebase.h>
#include <WiFiClient.h>

#define ssid "Co Breakout"
#define password "PowerPoint"
#define Firebase_Host "https://foras-d8f7b-default-rtdb.asia-southeast1.firebasedatabase.app/"
#define Firebase_Auth "s7Wl7N2FRYyVbfsPz5GuWjyaj4OKhCRhp7DDEEzd"

Firebase firebase(Firebase_Host);

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
  
  firebase.setFloat("Example/setFloat", 45.390);
}

void loop() {
  // put your main code here, to run repeatedly:

}
