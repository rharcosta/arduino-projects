const int led13 = 13;
const int led12 = 12;
const int led11 = 11;
const int led10 = 10;
const int led9 = 9;
const int led8 = 8;
const int led7 = 7;
const int led6 = 6;
const int led5 = 5;
const int led4 = 4;

void setup() {
  pinMode(led13, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led4, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int val = analogRead(0);
  Serial.println(val);

  if (val >= 1000) {

    digitalWrite(led13, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led4, HIGH);
  }

  if (val >= 900 && val <= 1000 ) {

    digitalWrite(led13, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led4, LOW);
  }

  if (val >= 800 && val <= 900 ) {

    digitalWrite(led13, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
  }

  if (val >= 700 && val <= 800 ) {

    digitalWrite(led13, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led6, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
  }

  if (val >= 600 && val <= 700 ) {

    digitalWrite(led13, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led7, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
  }

  if (val >= 500 && val <= 600 ) {

    digitalWrite(led13, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led8, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
  }

  if (val >= 400 && val <= 500 ) {

    digitalWrite(led13, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led9, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
  }

  if (val >= 300 && val <= 400 ) {

    digitalWrite(led13, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led11, HIGH);
    digitalWrite(led10, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
  }

  if (val >= 200 && val <= 300 ) {

    digitalWrite(led13, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led11, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
  }

  if (val >= 100 && val <= 200 ) {

    digitalWrite(led13, HIGH);
    digitalWrite(led12, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
  }

  if (val < 100) {
    digitalWrite(led13, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led4, LOW);
  }
}
