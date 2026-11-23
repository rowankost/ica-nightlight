// button.ino - reads the pushbutton on BUTTON_PIN
// The button connects the pin to GND, so a press reads LOW.

// Should return true once for each press of the button.
const unsigned long BUTTON_DEBOUNCE_MS = 50
bool buttonPressed() {
    if (millis() % BUTTON_DEBOUNCE_MS !=0) return false;
    static int nextState = HIGH;
  int currentState = digitalRead(BUTTON_PIN);
  // Check if the button just changed from unpressed (HIGH) to pressed (LOW)
  bool pressed = (nextState == HIGH && currentState == LOW);
  lastState = currentState;
  return pressed;
}
