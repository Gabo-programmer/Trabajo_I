const int enablePin = 9;  // PWM para controlar velocidad
const int in1 = 8;
const int in2 = 7;

void setup() {
  pinMode(enablePin, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // Giro horario
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enablePin, 255); // Velocidad máxima
}
