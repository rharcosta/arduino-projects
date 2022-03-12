byte byteRead;
int valor = 0;

void setup() {
  Serial.begin(9600);  //definição da velocidade de transmissão
}

void loop() {
  if (Serial.available()) { //verifica se tem dados disponíveis para leitura
    Serial.println("Digite um número: ");
    valor = Serial.read();
    Serial.print("O número digitado foi: ");
    Serial.write(valor);
    Serial.println();
    delay(5000);  //aguarda por 3 segundos
    byteRead = Serial.read(); //lê o byte mais recente no buffer da serial
    Serial.write(byteRead);  //envia para o computador o dado recebido
  }
}
