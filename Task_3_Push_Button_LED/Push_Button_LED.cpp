#include <Arduino.h>

#define LED_PIN 33           // LED connected to GPIO 33
#define BUTTON_PIN 14        // Button connected to GPIO 14

void setup() {
  Serial.begin(115200);           // Initialize serial communication
  pinMode(LED_PIN, OUTPUT);       // Set LED_PIN as an output
  pinMode(BUTTON_PIN, INPUT);     // Set BUTTON_PIN as an input
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);  // Read button state

  Serial.println(buttonState);      // Print button 

  if (buttonState == HIGH) {        // If button is pressed (HIGH)
    digitalWrite(LED_PIN, LOW);     // Turn LED ON 
  } else {                          // If button is not pressed (LOW)
    digitalWrite(LED_PIN, HIGH);    // Turn LED OFF 
  }

  delay(10);  // Small delay to debounce button press
}
