const int led_vermelho = 11;
const int led_verde = 10;
const int led_amarelo = 12;
char led;  void setup()
{
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if (Serial.available()) {
    led = Serial.read();
    if (led == 'R') { // Led vermelho - red
      digitalWrite(led_vermelho, HIGH); // Acende led
      delay(4000);
      digitalWrite(led_vermelho, LOW);
    }
    if (led == 'G') { // Led verde - green
      digitalWrite(led_verde, HIGH); // Acende led
      delay(4000);
      digitalWrite(led_verde, LOW);
    }
    if (led == 'Y') { // Led amarelo - yellow
      digitalWrite(led_amarelo, HIGH); // Acende led
      delay(4000);
      digitalWrite(led_amarelo, LOW);
    }
  }
}
