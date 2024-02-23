const int vermelho = 27;
const int amarelo = 12;
const int verde = 13;

void setup() {
      pinMode(vermelho, OUTPUT); //VERMELHO
      pinMode(amarelo, OUTPUT); //AMARELO
      pinMode(verde, OUTPUT); //VERDE

}

void loop() {
      digitalWrite(vermelho, 0);
      digitalWrite(amarelo, 0);
      digitalWrite(verde, 1);
      delay(1000);
      digitalWrite(vermelho, 0);
      digitalWrite(amarelo, 1);
      digitalWrite(verde, 0);
      delay(800);
      digitalWrite(vermelho, 1);
      digitalWrite(amarelo, 0);
      digitalWrite(verde, 0);
      delay(1000);
     
}
