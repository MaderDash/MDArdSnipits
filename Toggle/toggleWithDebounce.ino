/*
MadderDash, 07,11,2024 update
TODO add comments to the code.
 
 sss sssss   sSSSs     sSSSs     sSSSs   d      d sss   
     S      S     S   S     S   S     S  S      S       
     S     S       S S         S         S      S       
     S     S       S S         S         S      S sSSs  
     S     S       S S    ssSb S    ssSb S      S       
     S      S     S   S     S   S     S  S      S       
     P       "sss"     "sss"     "sss"   P sSSs P sSSss 
                                                        
 */

const int BUTTON_PIN = 3; // Button pin
const int DEBOUNCE_DELAY = 50; // Debounce delay in milliseconds

bool buttonPressed = false;
unsigned long lastButtonPress = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  checkButtonPress();
}

void checkButtonPress() {
  int buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == HIGH && !buttonPressed) {
    // Button press detected, debounce it
    if (millis() - lastButtonPress > DEBOUNCE_DELAY) {
      buttonPressed = true;
      lastButtonPress = millis();
      // Handle button press event here
      Serial.println("Button pressed!");
    }
  } else if (buttonState == LOW && buttonPressed) {
    // Button release detected, reset state
    buttonPressed = false;
  }
}