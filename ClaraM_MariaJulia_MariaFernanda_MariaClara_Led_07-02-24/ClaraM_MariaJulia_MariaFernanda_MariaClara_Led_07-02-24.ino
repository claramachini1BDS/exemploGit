//Declaração das variáveis que representam os pinos dos led
int ledAmarelo = 9;
int ledVermelho = 8;
int ledVerde = 10;
int ledAmarelo2 = 12;
int ledVermelho2 = 13;
int ledVerde2 = 11;

void setup() {
  //Definindo os tipos dos pinos
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo2, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
  pinMode(ledVerde2, OUTPUT);


  delay(1000);
}

void loop() {
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelho2, HIGH);
  delay(5000);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, HIGH);
  delay(2500);
  digitalWrite(ledVermelho2, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVermelho, HIGH);
  digitalWrite(ledVerde2, HIGH);
  delay(5000);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo2, HIGH);
  delay(2500);
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho, LOW);
  
  
  
}
