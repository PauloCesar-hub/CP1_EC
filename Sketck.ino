const int ldrPin = A0;
const int ledVerde = 2;
const int ledAmarelo = 3;
const int ledVermelho = 4;
const int buzzer = 5;


const int LIMIAR_OK = 800;     
const int LIMIAR_ALERTA = 500; 

void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(ldrPin);
  Serial.println(leitura);

  if (leitura >= LIMIAR_OK) {
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(buzzer, LOW);
  } else if (leitura >= LIMIAR_ALERTA) {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(buzzer, HIGH);
    delay(3000);
    digitalWrite(buzzer, LOW);
  } else {
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(buzzer, HIGH);
  }

  delay(1000);
}
