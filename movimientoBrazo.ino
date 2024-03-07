#include <Servo.h>

//DECLARACIÓN DE PINES
#define A1 2
#define A2 3
#define A3 4

#define B1 5
#define B2 6
#define B3 7

//DECLARACIÓN DE SERVOS
Servo servoA1;
Servo servoA2;
Servo servoA3;

Servo servoB1;
Servo servoB2;
Servo servoB3;

void setup() {
  //ASIGNACIÓN DE PINES
  servoA1.attach(A1);
  servoA2.attach(A2);
  servoA3.attach(A3);

  servoB1.attach(B1);
  servoB2.attach(B2);
  servoB3.attach(B3);

  //CALIBRACIÓN INICIAL
  servoA1.write(45);
  servoA2.write(140);
  servoA3.write(135);
  servoB1.write(23);
  servoB2.write(45);
  servoB3.write(180);
  delay(1000);
}

void loop() {
  //BAJAR Y AGARRAR
  servoA2.write(120);
  servoA3.write(150);
  servoB2.write(83);
  delay(1000);
  servoB3.write(0);
  delay(1000);

  //SUBIR
  servoA2.write(140);
  servoA3.write(135);
  servoB2.write(45);
  delay(1000);

  //DESPLAZAR
  servoA1.write(0);
  delay(1000);

  //BAJAR Y SOLTAR
  servoA2.write(120);
  servoA3.write(150);
  servoB2.write(83);
  delay(1000);
  servoB3.write(180);
  delay(1000);

  //SUBIR
  servoA2.write(140);
  servoA3.write(135);
  servoB2.write(45);
  delay(1000);

  //REGRESAR
  servoA1.write(45);
  delay(1000);
}