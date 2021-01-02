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

int ledPin = 12;
int dotDelay = 200;

void dot(){
  digitalWrite(ledPin, HIGH);
delay(dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
}
void dash(){
  digitalWrite(ledPin, HIGH);
delay(3 * dotDelay);
digitalWrite(ledPin, LOW);
delay(dotDelay);
}
void letterEnd(){
  delay(3 * dotDelay);
}
void wordEnd(){
  delay(6 * dotDelay);
}

void letterH(){
  dot();
  dot();
  dot();
  dot();
  letterEnd();
}
void letterE(){
  dot();
  letterEnd();
}
void letterL(){
  dot();
  dash();
  dot();
  dot();
  letterEnd();
}
void letterO(){
  dash();
  dash();
  dash();
  letterEnd();
}
void letterW(){
dot();
dash();
dash();
letterEnd();
}
void letterR(){
  dot();
  dash();
  dot();
  letterEnd();
}
void letterD(){
  dash();
  dot();
  dot();
  letterEnd();
}


void setup(){
pinMode(ledPin, OUTPUT);
}


void loop(){
letterH();
letterE();
letterL();
letterL();
letterO();
wordEnd();
letterW();
letterO();
letterR();
letterL();
letterD();
}
