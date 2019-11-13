#include <AccelStepper.h>

#define ENA 8
#define DIR 9
#define STEP 10

#define SPEED_MAX 1900

#define spoolCirc 94.2
#define stepsPerRotation 400
#define stepsPerMM (stepsPerRotation/spoolCirc)

AccelStepper stepper(AccelStepper::DRIVER, STEP, DIR);

bool goBack = false;
long lastMillis;

void setup() {
  pinMode(ENA, OUTPUT);
  digitalWrite(ENA, LOW);

  pinMode(LED_BUILTIN, OUTPUT);
  lastMillis = millis();
  stepper.setMaxSpeed(350);
  stepper.setAcceleration(40);
  stepper.moveTo(800);
}

void loop() {
  if (stepper.distanceToGo() == 0) {
    stepper.moveTo(-stepper.currentPosition());
  }
  stepper.run();
}
