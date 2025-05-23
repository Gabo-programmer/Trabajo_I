const int motorPin = 9;
const int velocidad_baja = 80;  // Debe coincidir con código 1
const int velocidad_max = 255;

void setup() {
  pinMode(motorPin, OUTPUT);

  // Aumenta desde la velocidad baja hasta la máxima
  for (int pwm = velocidad_baja; pwm <= velocidad_max; pwm += 5) {
    analogWrite(motorPin, pwm);
    delay(100);
  }

  // Mantiene velocidad máxima constante
  analogWrite(motorPin, velocidad_max);
}

void loop() {
  // Mantener velocidad máxima indefinidamente
}
