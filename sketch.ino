#define led1Pin 13
#define led2Pin 9
#define button1Pin 12
#define button2Pin 8

void setup() {
 
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT);
}

void loop() {

  int button1State = digitalRead(button1Pin);
  int button2State = digitalRead(button2Pin);
  
  if (button1State == LOW) {
    digitalWrite(led1Pin, HIGH);
  } else {
    digitalWrite(led1Pin, LOW);
  }

  if (button2State == HIGH) {
    digitalWrite(led2Pin, HIGH);
  } else {
    digitalWrite(led2Pin, LOW);
  }
}