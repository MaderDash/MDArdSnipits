
const int inputPin = 3;


bool inputLatch = false;

void setup()
{
	
	pinMode(inputPin, INPUT);
}

void loop()
{
	
	if (digitalRead(inputPin) && inputLatch)
	{
		inputLatch = false;
		
	}

	
	if (digitalRead(inputPin) == LOW && inputLatch == false)
	{
		inputLatch = true;
		
	}
}