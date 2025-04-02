#define LED_PIN 14           // GPIO Pin for LED
#define LED_CHANNEL 0        // PWM Channel
#define LED_FREQ 5000        // Frequency in Hz
#define LED_RESOLUTION 8     // 8-bit resolution (0-255)

void setup() {
  ledcSetup(LED_CHANNEL, LED_FREQ, LED_RESOLUTION);  // Configure PWM
  ledcAttachPin(LED_PIN, LED_CHANNEL);               // Attach LED to PWM channel
}

void loop() {
  // Gradually increase brightness
  for (int brightness = 0; brightness <= 255; brightness++) {
    ledcWrite(LED_CHANNEL, brightness);  // Set brightness
    delay(10);  // Small delay for smooth transition
  }

  // Gradually decrease brightness
  for (int brightness = 255; brightness >= 0; brightness--) {
    ledcWrite(LED_CHANNEL, brightness);  // Set brightness
    delay(10);  // Small delay for smooth transition
  }
}
