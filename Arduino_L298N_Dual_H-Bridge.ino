//L293D
//Motor A
coast int motorPin1  = D5;  // IN1 pin for pin 5 of arduino
const int motorPin2  = D6;  // IN2 pin for pin 6 of arduino
//Motor B
const int motorPin3  = D10; // IN3 pin for pin 10 of arduino
const int motorPin4  = D9;  // IN4 pin for pin 9 of arduino
void setup() {
  Serial.begin(9600);
  Serial.println(" DC MOTOR CONTROL");

  //Set pins as outputs
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  delay(3000);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, HIGH);
}
void loop() {
  Serial.println("Motor A in forward direction");
  //Motor Control - Motor A: motorPin1,motorpin2 & Motor B: motorpin3,motorpin4
  delay(3000);
  //This code  will turn Motor A clockwise for 2 sec.
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);

  delay(3000);
  //This code will turn Motor An  anti-clockwise for 2 sec.
  Serial.println("Motor A in backword direction");
  delay(3000);
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(3000);
  //This code will turn Motor B clockwise for 2 sec.
  Serial.println("Motor B in forward direction");
  delay(3000);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  delay(3000);
  //This code will turn Motor B anti-clockwise for 2 sec.
  Serial.println("Motor B in backword direction");
  delay(3000);
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  delay(3000);
  //And this code will stop motors
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(2000);
  Serial.println("");
}
