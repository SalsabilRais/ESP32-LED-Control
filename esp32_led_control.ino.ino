#include <WiFi.h>

// 🔹 Remplace par ton WiFi
const char* ssid = "Tenda_D935B8-5G";
const char* password = "2024@2025";

// 🔹 LED pin
const int ledPin = 2;

// 🔹 Serveur web sur port 80
WiFiServer server(80);

void setup() {
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  // Connexion WiFi
  Serial.print("Connecting to WiFi");
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi connected!");
  Serial.println(WiFi.localIP());

  server.begin();
}

void loop() {
  WiFiClient client = server.available();

  if (client) {
    String request = client.readStringUntil('\r');
    client.flush();

    // 🔹 LED ON
    if (request.indexOf("/LED=ON") != -1) {
      digitalWrite(ledPin, HIGH);
    }

    // 🔹 LED OFF
    if (request.indexOf("/LED=OFF") != -1) {
      digitalWrite(ledPin, LOW);
    }

    // 🔹 Page HTML
    client.println("HTTP/1.1 200 OK");
    client.println("Content-type:text/html");
    client.println();

    client.println("<!DOCTYPE html><html>");
    client.println("<head><title>ESP32 LED Control</title></head>");
    client.println("<body style='text-align:center;font-family:Arial'>");

    client.println("<h1>ESP32 LED Control</h1>");

    client.println("<p><a href='/LED=ON'><button style='padding:20px;background:green;color:white'>ON</button></a></p>");
    client.println("<p><a href='/LED=OFF'><button style='padding:20px;background:red;color:white'>OFF</button></a></p>");

    client.println("</body></html>");

    client.stop();
  }
}