// C++ code

// Declare variables for each LED pin:
int redLed = 13;
int orangeLed = 12;
int greenLed = 11;
int greyLed = 10;
int brownLed = 9;
int blueLed = 8;

void setup() {
  // Initialize all LED pins as outputs:
  pinMode(redLed, OUTPUT);
  pinMode(orangeLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(greyLed, OUTPUT);
  pinMode(brownLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
}

void loop() {
  // Turn on LEDs in sequence with different delay times
  
  // Red LED on, others off
  digitalWrite(redLed, HIGH);
  digitalWrite(orangeLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(greyLed, LOW);
  digitalWrite(brownLed, LOW);
  digitalWrite(blueLed, LOW);
  delay(800); // 0.8 second delay
  
  // ORANGE LED on, others off
  digitalWrite(redLed, LOW);
  digitalWrite(orangeLed, HIGH);
  digitalWrite(greenLed, LOW);
  digitalWrite(greyLed, LOW);
  digitalWrite(brownLed, LOW);
  digitalWrite(blueLed, LOW);
  delay(600); // 0.6 second delay
  
  // GREEN LED on, others off
  digitalWrite(redLed, LOW);
  digitalWrite(orangeLed, LOW);
  digitalWrite(greenLed, HIGH);
  digitalWrite(greyLed, LOW);
  digitalWrite(brownLed, LOW);
  digitalWrite(blueLed, LOW);
  delay(700); // 0.7 second delay
  
  // GREY LED on, others off
  digitalWrite(redLed, LOW);
  digitalWrite(orangeLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(greyLed, HIGH);
  digitalWrite(brownLed, LOW);
  digitalWrite(blueLed, LOW);
  delay(500); // 0.5 second delay
  
  // BROWN LED on, others off
  digitalWrite(redLed, LOW);
  digitalWrite(orangeLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(greyLed, LOW);
  digitalWrite(brownLed, HIGH);
  digitalWrite(blueLed, LOW);
  delay(900); // 0.9 second delay
  
  // BLUE LED on, others off
  digitalWrite(redLed, LOW);
  digitalWrite(orangeLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(greyLed, LOW);
  digitalWrite(brownLed, LOW);
  digitalWrite(blueLed, HIGH);
  delay(400); // 0.4 second delay
}