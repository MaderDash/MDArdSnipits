// Define the pin number for the input
const int inputPin = 3;

// Initialize the latch variable to keep track of the input state
bool inputLatch = false;

void setup()
{
	// Set the input pin as an input
	pinMode(inputPin, INPUT);
}

void loop()
{
	// Check if the input pin is HIGH and the latch is true
	if (digitalRead(inputPin) && inputLatch)
	{
		inputLatch = false;
		// This would trigger if the input pin was LOW and now is HIGH.
	}

	// Check if the input pin is LOW and the latch is false
	if (digitalRead(inputPin) == LOW && inputLatch == false)
	{
		inputLatch = true;
		// This would trigger if the input pin was HIGH and now is LOW.
	}
}