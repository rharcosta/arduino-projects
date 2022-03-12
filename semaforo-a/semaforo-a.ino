const int led_vermelho = 11;
const int led_verde = 10;
const int led_amarelo = 12;

const int led_vermelho2 = 6;
const int led_verde2 = 5;
const int led_amarelo2 = 7;

char led;

void setup()
{
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_vermelho2, OUTPUT);
  pinMode(led_verde2, OUTPUT);
  pinMode(led_amarelo2, OUTPUT);
}

void loop()
{
  digitalWrite(led_vermelho, HIGH);
  digitalWrite(led_verde2, HIGH);
  delay(4000);

  digitalWrite(led_verde2, LOW);
  digitalWrite(led_amarelo2, HIGH);
  delay(1500);
  digitalWrite(led_amarelo2, LOW);
  digitalWrite(led_vermelho2, HIGH);

  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_verde, HIGH);
  delay(4000);
  digitalWrite(led_verde, LOW);
  digitalWrite(led_amarelo, HIGH);
  delay(1500);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_vermelho2, LOW);
}
