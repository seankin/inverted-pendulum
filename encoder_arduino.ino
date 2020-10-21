#include <Encoder.h>

Encoder myEnc1(2, 4);
Encoder myEnc2(5, 6);

void setup() {
  Serial.begin(9600);
  Serial.println("Basic Encoder Test:");
}

long oldPosition1  = -999;
long oldPosition2  = -999;


void loop() {


  long newPosition1 = myEnc1.read();
  long newPosition2 = myEnc2.read();
  if (newPosition1 != oldPosition1 or (newPosition2 != oldPosition2) ) {
    oldPosition1 = newPosition1;
    oldPosition2 = newPosition2;
    Serial.print("Position of Cart Pole: ");
    Serial.println(newPosition1);
    Serial.print("Position of Pendulum: ");
    Serial.println(newPosition2);
    
    }
  }
