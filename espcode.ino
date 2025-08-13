#include <WiFi.h>              // For Wi-Fi connection on ESP32
#include <WebServer.h>         // For HTTP server on ESP32
const char* ssid = "POCO";   // Enter SSID here
const char* password = "qevt1738"; // Enter Password here

WebServer server(80);


void setup() {
  Serial.begin(9600);
  delay(100);

  Serial.println("Connecting to ");
  Serial.println(ssid);

  //connect to your local wi-fi network
  WiFi.begin(ssid, password);

  //check NodeMCU is connected to Wi-fi network
  while (WiFi.status() != WL_CONNECTED) {
  delay(1000);
  Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected..!");
  Serial.print("Got IP: ");  
  Serial.println(WiFi.localIP());

  server.on("/", handle_OnConnect);
  server.on("/forw", handle_forw);
  server.on("/back", handle_back);
  server.on("/left", handle_left);
  server.on("/right", handle_right);
  server.on("/stop", handle_stop);
  server.onNotFound(handle_NotFound);

  server.begin();
  Serial.println("HTTP Server Started");
}
void loop() {
  server.handleClient();
}

void handle_OnConnect() {
  server.send(200, "text/html", "hii"); 
}
void handle_forw() {
  Serial.println(1);
  server.send(200, "text/html", "hii"); 
}
void handle_back() {
  Serial.println(2);
  server.send(200, "text/html", "hii"); 
}
void handle_left() {
  Serial.println(3);
  server.send(200, "text/html", "hii"); 
}
void handle_right() {
  Serial.println(4);
  server.send(200, "text/html", "hii"); 
}
void handle_stop() {
  Serial.println(5);
  server.send(200, "text/html", "hii"); 
}

void handle_NotFound(){
  server.send(404, "text/plain", "Not found");
}