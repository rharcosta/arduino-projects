const int led_vermelho = 11;
const int led_verde = 10;
const int led_amarelo = 12;
char led;

void setup()
{
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
}

void loop()
{
  digitalWrite(led_vermelho, HIGH); // Acende led
  delay(3000);
  digitalWrite(led_vermelho, LOW);

  digitalWrite(led_verde, HIGH); // Acende led
  delay(4000);
  digitalWrite(led_verde, LOW);

  digitalWrite(led_amarelo, HIGH); // Acende led
  delay(2000);
  digitalWrite(led_amarelo, LOW);
}
