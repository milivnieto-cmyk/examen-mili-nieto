
// 1. Define the pins using the new analog pins (A1, A2, A3)
const int verde = A1;
const int amarillo = A2;
const int rojo = A3;

void setup() {
  // 2. Configure the analog pins as digital OUTPUTs
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop() {
  // --- Traffic Light Sequence ---

  // Turn Green ON for 3 seconds
  digitalWrite(verde, HIGH);
  delay(3000);
  digitalWrite(verde, LOW);

  // Turn Yellow ON for 1 second
  digitalWrite(amarillo, HIGH);
  delay(1000);
  digitalWrite(amarillo, LOW);

  // Turn Red ON for 3 seconds
  digitalWrite(rojo, HIGH);
  delay(3000);
  digitalWrite(rojo, LOW);
}
