#include <Arduino.h>

#define LDR_PIN 34 // Analog pin for LDR (ADC1_CH6)
#define LED_PIN 33 // LED connected to GPIO 33

int threshold = 1500; // Adjust based on light levels

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int lightLevel = analogRead(LDR_PIN); // Read LDR value
  Serial.print("Light Level: ");
  Serial.println(lightLevel); // Print light level for debugging

  if (lightLevel < threshold) {
    digitalWrite(LED_PIN, HIGH); // Turn LED ON in darkness
  } else {
    digitalWrite(LED_PIN, LOW); // Turn LED OFF in brightness
  }

  delay(500); // Small delay to stabilize readings
}
