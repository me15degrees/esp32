const int PINO_VERDE = 13;
const int PINO_AMARELO = 12;
const int PINO_VERMELHO = 27;
const int PINO_BOTAO = 2;
bool estadoLed = false;

void setup() {
  pinMode(PINO_VERDE, OUTPUT);
  pinMode(PINO_AMARELO, OUTPUT);
  pinMode(PINO_VERMELHO, OUTPUT);
  pinMode(PINO_BOTAO, INPUT_PULLUP);
}

void loop() {
  int botaoPressionado = digitalRead(PINO_BOTAO); 

  if (botaoPressionado == LOW) {
    estadoLed = true;
    digitalWrite(PINO_VERDE, estadoLed);
    digitalWrite(PINO_AMARELO, estadoLed); 
    digitalWrite(PINO_VERMELHO, estadoLed);
  }
  else if (botaoPressionado == HIGH) {
    estadoLed = false;
    digitalWrite(PINO_VERDE, estadoLed);
    digitalWrite(PINO_AMARELO, estadoLed);
    digitalWrite(PINO_VERMELHO, estadoLed);
  }
}
