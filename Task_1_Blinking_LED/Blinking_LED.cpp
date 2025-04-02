#include <Arduino.h>

#define LED_PIN 26 // Define the GPIO pin for the LED

void setup() {
    pinMode(LED_PIN, OUTPUT); // Set LED pin as an output
}

void loop() {
    digitalWrite(LED_PIN, HIGH); // Turn LED ON
    delay(1000);   // Wait 1 second
    digitalWrite(LED_PIN, LOW);  // Turn LED OFF     
    delay(1000);   // Wait 1 second
}
