//L293D
//Motor A
const int motorPin1  = 5;  // Pin 14 of L293
const int motorPin2  = 6;  // Pin 10 of L293
const int ledPin1 = 11;    // red led
//Motor B
const int motorPin3  = 10; // Pin  7 of L293
const int motorPin4  = 9;  // Pin  2 of L293
const int ledPin2 = 12;    // green led
//This will run only one time.
void setup() {
  Serial.begin(9600);
  Serial.println(" DC MOTOR CONTROL");

  //Set pins as outputs
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, HIGH);
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);

}
void loop() {
  delay(1000);
  //Motor Control - Motor A: motorPin1,motorpin2 & Motor B: motorpin3,motorpin4
  Serial.println("Motor A in forward direction");
  //This code  will turn Motor A clockwise for 2 sec.
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin1, HIGH);
  delay(3000);
  //This code will turn Motor An  anti-clockwise for 2 sec.


  delay(200);
  Serial.println("Motor A in backword direction");
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(3000);

  //This code will turn Motor B clockwise for 2 sec.
  delay(200);
  Serial.println("Motor B in forward direction");

  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin1, HIGH);
  delay(3000);

  //This code will turn Motor B anti-clockwise for 2 sec.
  delay(200);
  Serial.println("Motor B in backword direction");

  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(3000);

  //And this code will stop motors
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  delay(1000);
  Serial.println("");
}
