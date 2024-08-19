// Define pin numbers for the traffic light, buzzer, and sensor
const int redPin = 10;    // Pin connected to red light
const int yellowPin = 9;  // Pin connected to yellow light
const int greenPin = 8;   // Pin connected to green light
const int buzzerPin = 7;  // Pin connected to buzzer
const int sensorPin = 3;  // Pin connected to KY-032 sensor

void setup() {
  // Set the traffic light pins as output
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  
  // Set the buzzer pin as output
  pinMode(buzzerPin, OUTPUT);
  
  // Set the sensor pin as input
  pinMode(sensorPin, INPUT);

  // Start with the green light on
  digitalWrite(greenPin, HIGH);
}

void loop() {
  // Turn on the green light
  digitalWrite(greenPin, HIGH);
  delay(5000);  // Keep the green light on for 5 seconds
  digitalWrite(greenPin, LOW);  // Turn off the green light

  // Turn on the yellow light
  digitalWrite(yellowPin, HIGH);
  delay(2000);  // Keep the yellow light on for 2 seconds
  digitalWrite(yellowPin, LOW);  // Turn off the yellow light

  // Turn on the red light
  digitalWrite(redPin, HIGH);

  // Record the start time of the red light using the millis() function
  unsigned long startTime = millis();  // Start time in milliseconds

  // Loop to keep checking for car during the red light phase
  while (millis() - startTime < 5000) {  // Continue for 5 sec (5000 millis)
    if (digitalRead(sensorPin) == LOW) {  // Check if sensor detects a car
      digitalWrite(buzzerPin, HIGH);  // Sound the buzzer if a car is detected
      delay(500);  // Buzzer on for .5 second
      digitalWrite(buzzerPin, LOW);  // Turn off the buzzer
      break;  // Exit the loop once the buzzer has sounded
    }
  }

  // Turn off the red light after the loop ends
  digitalWrite(redPin, LOW);
}
