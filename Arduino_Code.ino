// Define Motor1 Variables
const int Motor1Pos=3;
const int Motor1Neg=5;

// Define Motor2 Variables
const int Motor2Pos=10;
const int Motor2Neg=11;

void setup() {
  // Initialize Motors pins as OUTPUT
  pinMode(Motor1Pos,OUTPUT);
  pinMode(Motor1Neg,OUTPUT);
  pinMode(Motor2Pos,OUTPUT);
  pinMode(Motor2Neg,OUTPUT);
}

void loop() {
 // Rotate Motor1 Clockwise for 2 seconds
 digitalWrite(Motor1Pos, HIGH);
 digitalWrite(Motor1Neg, LOW);
 digitalWrite(Motor2Pos, LOW);
 digitalWrite(Motor2Neg, LOW);
 delay(2000);

 // Rotate Motor2 Counterclockwise for 2 seconds
 digitalWrite(Motor1Pos, LOW);
 digitalWrite(Motor1Neg, LOW);
 digitalWrite(Motor2Pos, LOW);
 digitalWrite(Motor2Neg, HIGH);
 delay(2000);

}
