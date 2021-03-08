#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include <DHT.h>
#define DHTTYPE DHT11
#define DHTPIN  D4
DHT dht(DHTPIN, DHTTYPE);
#define FIREBASE_HOST "fir-dht-c32b0.firebaseio.com"
#define FIREBASE_AUTH "TIN9bSVLs1z7gjDJBRbYvy35b09kbC1JF8yc38Op"
#define WIFI_SSID "Shary124_Ext"
#define WIFI_PASSWORD "3343572002@"
void setup() {
   Serial.begin(9600);

  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

}

void loop() {
float h = dht.readHumidity();
  
  float t = dht.readTemperature();
  Firebase.setFloat("Temperature", t);
  Firebase.setFloat("Humidity", h);
  
   Serial.println(t);
   Serial.println(h);
  delay(50);

}
