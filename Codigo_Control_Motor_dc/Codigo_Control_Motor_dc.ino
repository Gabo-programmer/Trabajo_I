<<<<<<< HEAD
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
=======
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
>>>>>>> bceb6842e876af0576d4da527028488fbea25517
}
