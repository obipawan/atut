/*
 * buttons and pulse wave modulation
 */

int switchPin = 8;
int ledPin = 13;
boolean lastButton = LOW;
boolean currentButton = LOW;
boolean isLedOn = false;

void setup() {
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

boolean debounce(boolean last){
  boolean current = digitalRead(switchPin);
  if(current != last){
    delay(5);
    current = digitalRead(switchPin);
  }
  return current;
}

void loop() {
  currentButton = debounce(lastButton);
  if(lastButton == LOW && currentButton == HIGH){
    isLedOn != isLedOn;
  }
  lastButton = currentButton;
  digitalWrite(ledPin, isLedOn);
}
