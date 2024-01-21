#include <ESP8266WiFi.h>
#include "Wifi-Clock-Lib/prefsManager.h"
#include "Wifi-Clock-Lib/WiFiManager.h"

void setup() {
  
  Serial.begin(115200);
  delay(10);
  
  // Wifi init
  initWiFi();

  // Print the IP address
  Serial.println(WiFi.localIP());
}

void loop() {
  
}
