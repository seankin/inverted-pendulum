#include <Encoder.h>

Encoder myEnc1(2, 4);
Encoder myEnc2(5, 7);

void setup() {
  Serial.begin(9600);
  Serial.println("Basic Encoder Test:");
}

long oldPosition1  = -999;
long oldPosition2  = -999;
void loop() {
  long newPosition1 = myEnc1.read();
  if (newPosition1 != oldPosition1) {
    oldPosition1 = newPosition1;
    Serial.print("Direction Cart Pole: ");
    Serial.println(newPosition1);

  long newPosition2 = myEnc2.read();
  if (newPosition2 != oldPosition2) {
    oldPosition2 = newPosition2;
    Serial.print("Direction Pendulum: ");
    Serial.println(newPosition2);
    }
  }
}
