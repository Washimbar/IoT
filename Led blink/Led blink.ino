#include <WiFi.h>

const char* ssid = "Redmi Note 8 Pro";
const char* password = "74115600";

void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(115200);
  WiFi.begin(ssid, password);
}

void loop() {
  while (WiFi.status() == WL_CONNECTED) {
    digitalWrite(2, HIGH);
  }
  while (WiFi.status() != WL_CONNECTED) {
    digitalWrite(2, HIGH);
    delay(500);
    digitalWrite(2, LOW);
    delay(500);
    Serial.println("Connecting to WiFi..");
  }

  Serial.println("Connected to WiFi");
  delay(100);
}