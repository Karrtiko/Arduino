#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266Ping.h>

const char* ssid = "Come"; //Nama SSID AP/Hotspot
const char* password = "huhuhuhu"; //Password Wifi

ESP8266WebServer server(80); //Menyatakan Webserver pada port 80

void setup() {
  Serial.begin(9600);
  delay(10);

// Connect ke WiFi
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

// Mengatur WiFi 
  WiFi.mode(WIFI_STA); // Mode Station
  WiFi.begin(ssid, password); // Mencocokan SSID dan Password
    
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

// Tampilkan status Connected
  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

// Membuat tampilan Web
  server.on("/", []() {
    server.send(200, "text/plain", "Hello World");
  });

// Bagian ini untuk membuat halaman web lain
  server.on("/status", []() {
    server.send(200, "text/plain", "Ini adalah Page Status Aktif");
    bool ret = Ping.ping("www.google.com");
  });

  server.begin();
  Serial.println("Webserver dijalankan");
}

void loop() {
   server.handleClient();
   
}