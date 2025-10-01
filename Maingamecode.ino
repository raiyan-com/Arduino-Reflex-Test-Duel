int whiteled1 = 12;
int greenled = 11;
int yellowled = 10;
int redled = 9;
int whiteled2 = 8;

int buzzer = 7;

int button1 = 13;
int button2 = 6;

bool buttonPressed = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(whiteled1, OUTPUT);
  pinMode(greenled, OUTPUT);
  pinMode(yellowled, OUTPUT);
  pinMode(redled, OUTPUT);
  pinMode(whiteled2, OUTPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenled, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(greenled, LOW);

  digitalWrite(yellowled, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(yellowled, LOW);

  digitalWrite(redled, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(random(900,4901));
  digitalWrite(redled, LOW);

  while (buttonPressed == 0) {
    digitalWrite(whiteled1, HIGH);
    digitalWrite(whiteled2, HIGH);
    if (digitalRead(button1) == 0) {
      buttonPressed = 1;
      digitalWrite(whiteled2, LOW);
    } else if (digitalRead(button2) == 0) {
      buttonPressed = 1;
      digitalWrite(whiteled1, LOW);
    }
  }
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer,LOW);
  
  
  delay(1500);
  digitalWrite(whiteled1, LOW);
  digitalWrite(whiteled2, LOW);
  buttonPressed = 0;
}
