#define SWITCH_PIN 2
#include <Servo.h>

Servo index;
Servo middle;
Servo ring;  //declaramos los servos a utilizar
Servo pinky;
Servo thumb;
Servo wrist;
char pos = 0;

unsigned int num=0; //declaro variables
void setup() {
  // put your setup code here, to run once:
 index.attach(13);
 middle.attach(12);
 ring.attach(11);  //indicamos los pines de la placa para cada servo
 pinky.attach(10);
 thumb.attach(9);
 wrist.attach(8);
 index.write(90);
 delay(10);
 middle.write(90);
 delay(10);         //mandamos todos los servos a 90°
 ring.write(90);
 delay(10);
 pinky.write(90);
 delay(10);
 thumb.write(90);
 delay(10);
 pinMode(SWITCH_PIN, INPUT_PULLUP);
 
 Serial.begin(1200);
 Serial.println("Escribe el número de la función que quieras ejecutar"); //imprimimos un mesaje en el monitor
 Serial.println();
 Serial.println("1. Abrir");
 Serial.println();
 Serial.println("2. Relajar");
 Serial.println();
 Serial.println("3. Cerrar"); // Algunos ejemplos
 Serial.println();
 Serial.println("4. Paz");
 Serial.println();
 Serial.println("5. Love u");
 Serial.println();
 
}

void loop() {
  if (Serial.available() > 0){ 
    num= Serial.read() - 48; 
    Serial.println();
    Serial.println("Elegiste la función:");
    Serial.println(num);
    Serial.println();
  }
  if (num==1){  //si se eligió la función 1 se abrirá la mano
    index.write(180);
    delay(10);  //espera 10 ms
    middle.write(180);
    delay(10);         //mandamos todos los servos a 0°
    ring.write(180);
    delay(10);
    pinky.write(180);
    delay(10);
    thumb.write(180);
    delay(10);
    wrist.write(180);
    delay(10);
  }
  if (num==2){ //si se eligió la función 2 se relajará la mano
    index.write(90);
    delay(10);
    middle.write(90);
    delay(10);         //mandamos todos los servos a 90°
    ring.write(90);
    delay(10);
    pinky.write(90);
    delay(10);
    thumb.write(90);
    delay(10);
    wrist.write(90);
    delay(10);
  }
   if (num==3){ //si se eligió la función 3 se cerrará la mano
    index.write(0);
    delay(10);
    middle.write(0);
    delay(10);         //mandamos todos los servos a 180°
    ring.write(0);
    delay(10);
    pinky.write(0);
    delay(10);
    thumb.write(0);
    delay(10);
    wrist.write(0);
    delay(10);
   }
    if (num==4){  //si se eligió la función 4:paz
    index.write(180);
    delay(10);  
    middle.write(180);
    delay(10);         //index y middle arriba, los demás cerrados
    ring.write(0);
    delay(10);
    pinky.write(0);
    delay(10);
    thumb.write(0);
    delay(10);
  }
  
  if (num==5){  //si se eligió la función 5:love u
    index.write(180);
    delay(10);
    middle.write(0);  //te amo en lenguaje de señas
    delay(10);         
    ring.write(0);
    delay(10);
    pinky.write(180);
    delay(10);
    thumb.write(180);
    delay(10);
  } 
}
