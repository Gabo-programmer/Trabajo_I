const int motorPin = 9;
const int velocidad_baja = 80; // Valor PWM de 0 a 255

void setup() {
  pinMode(motorPin, OUTPUT);

  // Aumenta lentamente desde 0 hasta la velocidad baja establecida
  for (int pwm = 0; pwm <= velocidad_baja; pwm += 2) {
    analogWrite(motorPin, pwm);
    delay(100);
  }

  // Mantiene velocidad baja constante
  analogWrite(motorPin, velocidad_baja);
}

void loop() {
  // Mantener velocidad baja indefinidamente
}
