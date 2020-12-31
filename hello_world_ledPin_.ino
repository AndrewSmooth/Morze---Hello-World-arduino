//hello world
//.... H
//. E
//.-.. L
//.-.. L
//--- O

//.__ w
//___ O
//._. R
//._.. L
//_.. D

int ledPin = 13;
int dotDelay = 200;

void setup(){
pinMode(ledPin, OUTPUT);
}

void loop(){
digitalWrite(ledPin, LOW);
delay(5000);

//H 
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(3 * dotDelay);

//E
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin,  LOW);
delay(3 * dotDelay);

//L
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//_
digitalWrite(ledPin, HIGH);
delay(3 * dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay( 3 * dotDelay);


//L
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//_
digitalWrite(ledPin, HIGH);
delay(3 * dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay( 3 * dotDelay);

//O
//_
digitalWrite(ledPin,  HIGH);
delay(3* dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//_
digitalWrite(ledPin,  HIGH);
delay(3* dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//_
digitalWrite(ledPin,  HIGH);
delay(3 * dotDelay);
digitalWrite(ledPin, LOW);
delay(7 * dotDelay);

///W
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//_
digitalWrite(ledPin, HIGH);
delay(3 * dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//_
digitalWrite(ledPin, HIGH);
delay(3 * dotDelay);
digitalWrite(ledPin, LOW);
delay(3 * dotDelay);

//O
//_
digitalWrite(ledPin,  HIGH);
delay(3* dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//_
digitalWrite(ledPin,  HIGH);
delay(3* dotDelay);
digitalWrite(ledPin, LOW);
delay(3 * dotDelay);

//R
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//_
digitalWrite(ledPin,  HIGH);
delay(3* dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay( 3 * dotDelay);

//L
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//_
digitalWrite(ledPin, HIGH);
delay(3 * dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay( 3 * dotDelay);

//D
//_
digitalWrite(ledPin, HIGH);
delay(3 * dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
//.
digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(7 * dotDelay);









//finish
delay(5000);
}
