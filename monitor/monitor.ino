
int valor = 0;
void setup() {
  Serial.begin(9600);  //definição da velocidade de transmissão
}

void loop() {
  Serial.println("Digite um número");
  valor = Serial.read();  //leitura de dados do monitor serial
  Serial.print("O número digitado foi: ");
  Serial.write(valor);
  Serial.println();
  delay(5000);  //Aguarda por 3 segundos
}
