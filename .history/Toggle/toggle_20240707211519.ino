
/*
MadderDash, 07,07,2024 update
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