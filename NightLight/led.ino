// led.ino - controls the LED brightness (0 = off, 255 = full brightness)

int ledBrightness = 0;   // remembers the current brightness

void setLed(int brightness) {
  ledBrightness = constrain(brightness, 0, 255);
  analogWrite(LED_PIN, ledBrightness);
}

// Moves the LED toward the target brightness.
void fadeTowards(int target) {
  // TODO Task 2 (Developer B): fade in small steps instead of jumping.
  const int fade_step = 1;
  if(ledBrightness < target){
    while(ledBrightness < target){
      ledBrightness += fade_step;
      setLed(target);
      delay(10);
      if(ledBrightness == target){
        break;
      }
    }
  }
  if(ledBrightness > target){
    while(ledBrightness > target){
      ledBrightness -= fade_step;
      setLed(target);
      delay(10);
      if(ledBrightness == target){
        break;
      }
    }
  }
  setLed(target);
}

// TODO Task 7 (Developer C): add blinkLed() below this line.
