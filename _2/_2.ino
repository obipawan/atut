/*
 * buttons and pulse wave modulation
 */

int switchPin = 8;
int ledPin = 13;
boolean lastButton = LOW;
boolean isLedOn = false;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  if(digitalRead(switchPin) == HIGH && lastButton == LOW){
    isLedOn != isLedOn;
    lastButton = HIGH;
  }else{
    lastButton = digitalRead(switchPin);
  }
  digitalWrite(ledPin, isLedOn);
}
