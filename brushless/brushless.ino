#include<ESP32Servo.h>

Servo ESC;
const int esc_pin = 12;

int vel = 1000; 

void setup() {
  Serial.begin(9600);
  ESC.attach(esc_pin);

  // Activate speed controller
  ESC.writeMicroseconds(1000); 

  delay(2500); //Esperar 5 segundos para hacer la activacion
  Serial.setTimeout(10);
}

void loop() {
  // Generate a PWM
  if (vel >= 1000 && vel <= 2000){
    ESC.writeMicroseconds(vel);
  }
}
