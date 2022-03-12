const int ledPin1 = 13;
const int ledPin2 = 12;
const int ledPin3 = 11;
const int ledPin4 = 10;
const int ledPin5 = 9;

const int Botao = 2;
int estadoBotao = 0;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(Botao, INPUT);
}

/*void botao(){
   if (estadoBotao == HIGH){
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
  }
  else {
    /*digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin5, LOW);
  }
 }*/

void loop() {
  estadoBotao = digitalRead(Botao);

  if (estadoBotao == HIGH) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
  }
  else {
    digitalWrite(ledPin1, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(ledPin1, LOW);    // turn the LED off by making the voltage LOW
    delay(100);
  }
  if (estadoBotao == HIGH) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
  }
  else {
    digitalWrite(ledPin2, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(ledPin2, LOW);    // turn the LED off by making the voltage LOW
    delay(100); // wait for a second
  }
  if (estadoBotao == HIGH) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
  }
  else {
    digitalWrite(ledPin3, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(ledPin3, LOW);    // turn the LED off by making the voltage LOW
    delay(100);
  }
  if (estadoBotao == HIGH) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
  }
  else {
    digitalWrite(ledPin4, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(ledPin4, LOW);    // turn the LED off by making the voltage LOW
    delay(100);
  }
  if (estadoBotao == HIGH) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin5, HIGH);
  }
  else {
    digitalWrite(ledPin5, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);                       // wait for a second
    digitalWrite(ledPin5, LOW);    // turn the LED off by making the voltage LOW
    delay(100);
  }

}
