const int led_vermelho = 11;
const int led_verde = 10;
const int led_amarelo = 12;
const int led_vermelho2 = 7;
const int led_verde2 = 6;

const int Botao = 2;
int estadoBotao = 0;

void setup() {
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_vermelho2, OUTPUT);
  pinMode(led_verde2, OUTPUT);
}

void loop() {

  estadoBotao = digitalRead(Botao);

  if (estadoBotao == HIGH) {
    digitalWrite(led_vermelho2, LOW);
    digitalWrite(led_verde, LOW);
    digitalWrite(led_amarelo, LOW);
    digitalWrite(led_verde2, HIGH);
    digitalWrite(led_vermelho, HIGH);
  } else {
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_verde2, LOW);
    digitalWrite(led_vermelho2, HIGH);

    digitalWrite(led_verde, HIGH);
    delay(4000);
    digitalWrite(led_verde, LOW);

    digitalWrite(led_amarelo, HIGH);
    delay(1400);
    digitalWrite(led_amarelo, LOW);

    digitalWrite(led_vermelho, HIGH);
    delay(2000);
    digitalWrite(led_vermelho, LOW);
  }
}
