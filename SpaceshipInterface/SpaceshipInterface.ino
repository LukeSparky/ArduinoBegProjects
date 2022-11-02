int switchState = 0;

void setup() {
  pinMode(3, OUTPUT); //green led
  pinMode(4, OUTPUT); //red led
  pinMode(5, OUTPUT); //yellow led
  pinMode(2, INPUT); //push button
}

void loop() {
  switchState = digitalRead(2);

  //button
  if (switchState == LOW) {
    //is not pressed
    digitalWrite(3, HIGH); // green on
    digitalWrite(4, LOW); // red off
    digitalWrite(5, LOW); // yellow off
  } else {
    //is pressed
    delay(250);
    digitalWrite(3, LOW); // green off
    digitalWrite(4, HIGH); // red on
    digitalWrite(5, HIGH); // yellow on
    delay(250);
  }
}
