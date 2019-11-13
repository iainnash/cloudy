#include <Adafruit_NeoPixel.h>

// Data pins: D2, D3, D4
#define NUM_LEDS 6

Adafruit_NeoPixel strip1(NUM_LEDS, 2, NEO_RGBW);
Adafruit_NeoPixel strip2(NUM_LEDS, 3, NEO_RGBW);
Adafruit_NeoPixel strip3(NUM_LEDS, 4, NEO_RGBW);

void setup() {
  strip1.begin();
  strip2.begin();
  strip3.begin();
  strip1.show();
  strip2.show();
  strip3.show();
}

void loop() {
  for (int k = 200; k > 0; k -= 10) {
    for (int n = 0; n < NUM_LEDS; n++) {
      strip1.setPixelColor(n, strip1.Color(0, 0, 0, k));
      strip2.setPixelColor(n, strip2.Color(0, 0, 0, k));
      strip3.setPixelColor(n, strip3.Color(0, 0, 0, k));
    }
    delay(10);
    strip1.show();
    strip2.show();
    strip3.show();
  }
}

