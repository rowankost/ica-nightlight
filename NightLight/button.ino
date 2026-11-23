// button.ino - reads the pushbutton on BUTTON_PIN
// The button connects the pin to GND, so a press reads LOW.

// Should return true once for each press of the button.
    int nextState = HIGH;
bool buttonPressed() {
  int currentState = digitalRead(BUTTON_PIN);
  // Check if the button just changed from unpressed (HIGH) to pressed (LOW)
  bool pressed = (nextState == HIGH && currentState == LOW);

  lastState = currentState;

  if (pressed) {
    delay(50); // Simple debounce to ignore electrical flicker
  }
  return pressed;
}
