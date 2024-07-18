
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

const int inputPin = 3;
bool inputLatch = false;

void setup()
{
	pinMode(inputPin, INPUT);
}

void loop() {
  // Check for a button press that transitions from high to low.
  // This ensures that a single button press only registers as a single toggle.

  // If the button is pressed (HIGH) and the inputLatch is true (previous state was not pressed),
  // it means we've detected a valid button press.
	// Reset inputLatch to false, indicating that the button has been pressed
	// and we're waiting for it to be released before registering another press.

	if (digitalRead(inputPin) && inputLatch) {
    inputLatch = false;
  }

  // If the button is released (LOW) and the inputLatch is false (meaning a press has been registered),
  // we can now prepare for the next button press.
	// Set inputLatch to true, allowing the next button press to be detected.

  if (digitalRead(inputPin) == LOW && inputLatch == false) {
    inputLatch = true;
  }
}
