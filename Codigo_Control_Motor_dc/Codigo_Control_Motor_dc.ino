const int enablePin = 9;  //PWM
const int velocidad_baja = 90; // Valor PWM de 0 a 255

void setup() {
  pinMode(enablePin, OUTPUT);

  // Aumenta lentamente desde 0 hasta la velocidad baja establecida
  for (int pwm = 0; pwm <= velocidad_baja; pwm += 10) {
    analogWrite(enablePin, pwm);
    delay(100);
  }

  // Mantiene velocidad baja constante
  analogWrite(enablePin, velocidad_baja);
}

void loop() {
  // Mantener velocidad baja indefinidamente
}
