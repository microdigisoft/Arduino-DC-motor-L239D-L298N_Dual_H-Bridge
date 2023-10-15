const int inputPin1  = 10;  // Pin 10 of L293D IC
const int inputPin2  = 9; // Pin 9 of L293D IC
const int ledPin1  = 7;   //pin 7 for led 1
const int ledPin2  = 12;  // pin 12 for led 2


void setup()
{
  pinMode(inputPin1, OUTPUT);//Define inputPin1 as output
  pinMode(inputPin2, OUTPUT);//Define inputPin2 as output
  pinMode(ledPin1, OUTPUT);//Define ledPin1 as output
  pinMode(ledPin2, OUTPUT);//Define ledPin1 as output

}

void loop()
{ // motor ready to start//
  digitalWrite(inputPin1, HIGH);
  digitalWrite(inputPin2, HIGH);
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(1000);
  // motor in fordward direction//
  digitalWrite(inputPin1, HIGH);
  digitalWrite(inputPin2, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(2000);
  // taking some time interval//
  digitalWrite(inputPin1, LOW);
  digitalWrite(inputPin2, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin1, LOW);
  delay(1000);
  // motor in reverse direction//
  digitalWrite(inputPin1, LOW);
  digitalWrite(inputPin2, HIGH);
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin1, HIGH);
  delay(2000);
}
