// light_sensor.ino - reads the photoresistor on LIGHT_SENSOR_PIN
// Returns 0 (dark) up to 1023 (bright).

#include "config.h"
#ifndef LIGHT_SENSOR_PIN
#define LIGHT_SENSOR_PIN A0
#endif

#ifndef SENSOR_SAMPLES
#define SENSOR_SAMPLES 10
#endif

int readLight() {
  long total = 0;
  for (int i = 0; i < SENSOR_SAMPLES; i++) {
    total += analogRead(LIGHT_SENSOR_PIN);
  }
  return static_cast<int>(total / SENSOR_SAMPLES);
}

// TODO Task 8 (Project Manager): add lightLabel() below this line.
int lightLabel() {
  int lightValue = readLight();
  if (lightValue < 200) {
    return 0; // Dark
  } else if (lightValue < 600) {
    return 1; // Dim
  } else {
    return 2; // Bright
  }
}