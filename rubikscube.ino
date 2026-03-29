#include <AccelStepper.h>

// Her step motor için AccelStepper nesnesi oluştur
AccelStepper stepperU(AccelStepper::DRIVER, 23, 25);   // U
AccelStepper stepperD(AccelStepper::DRIVER, 43, 45);   // D
AccelStepper stepperF(AccelStepper::DRIVER, 27, 29);   // F
AccelStepper stepperB(AccelStepper::DRIVER, 31, 33);   // B
AccelStepper stepperR(AccelStepper::DRIVER, 35, 37); // R
AccelStepper stepperL(AccelStepper::DRIVER, 39, 41); // L

const int step90 = 50; // 1 yüz = 90° = 50 adım

void setup() {
  Serial.begin(9600);
  stepperU.setMaxSpeed(500); stepperU.setAcceleration(500);
  stepperD.setMaxSpeed(500); stepperD.setAcceleration(500);
  stepperF.setMaxSpeed(500); stepperF.setAcceleration(500);
  stepperB.setMaxSpeed(500); stepperB.setAcceleration(500);
  stepperR.setMaxSpeed(500); stepperR.setAcceleration(500);
  stepperL.setMaxSpeed(500); stepperL.setAcceleration(500);
}

void loop() {
  if (Serial.available()) {
    String move = Serial.readStringUntil('\n');
    move.trim();

    if (move == "U")       rotateFace(stepperU, step90);
    else if (move == "U'") rotateFace(stepperU, -step90);
    else if (move == "U2") rotateFace(stepperU, 2*step90);

    else if (move == "D")       rotateFace(stepperD, step90);
    else if (move == "D'")      rotateFace(stepperD, -step90);
    else if (move == "D2")      rotateFace(stepperD, 2*step90);

    else if (move == "F")       rotateFace(stepperF, step90);
    else if (move == "F'")      rotateFace(stepperF, -step90);
    else if (move == "F2")      rotateFace(stepperF, 2*step90);

    else if (move == "B")       rotateFace(stepperB, step90);
    else if (move == "B'")      rotateFace(stepperB, -step90);
    else if (move == "B2")      rotateFace(stepperB, 2*step90);

    else if (move == "R")       rotateFace(stepperR, step90);
    else if (move == "R'")      rotateFace(stepperR, -step90);
    else if (move == "R2")      rotateFace(stepperR, 2*step90);

    else if (move == "L")       rotateFace(stepperL, step90);
    else if (move == "L'")      rotateFace(stepperL, -step90);
    else if (move == "L2")      rotateFace(stepperL, 2*step90);
  }
}

void rotateFace(AccelStepper &stepper, int steps) {
  stepper.moveTo(stepper.currentPosition() + steps);
  stepper.runToPosition();
}
