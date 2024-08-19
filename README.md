LAB – TRAFFIC LIGHT	

“RUNNING A RED LIGHT” 
Simulated Alarm System

Equipment:
•	1 x Breadboard 
•	1 x Arduino UNO R3
•	1 x USB Type-B to USB cable (for programming and power)
•	7 x Male to Male Jumper Wires
•	6 x Male to Female Jumper Wires 
•	1 x Traffic Light Module
•	1 x Buzzer (active or passive)
•	1 x KY-032 Infrared Obstacle Avoidance Sensor
•	1 x toy car

Objective:
In this lab, you will build a simple traffic light control system using an Arduino. The system will include a sensor that detects when a toy car passes through the intersection. If the car passes while the light is red, a buzzer will sound to indicate a traffic violation. This lab will help you understand how to use conditional logic in Arduino programming to control outputs based on sensor input.

Setup:
1.	Power and Ground Setup:
o	Connect the Arduino’s 5V pin to the + power rail on the breadboard using a jumper wire.
o	Connect the Arduino’s GND pin to the - ground rail on the breadboard using a jumper wire.
2.	Traffic Light Module Connection:
o	Place the traffic light module onto the breadboard, running parallel to the power rails.
o	Connect the GND pin of the traffic light module to the - ground rail on the breadboard.
o	Connect the red LED pin of the module to pin 10 on the Arduino.
o	Connect the yellow LED pin of the module to pin 9 on the Arduino.
o	Connect the green LED pin of the module to pin 8 on the Arduino.
3.	Buzzer Connection:
o	Connect the positive terminal of the buzzer (middle pin) to the + power rail on the Arduino.
o	Connect the negative terminal of the buzzer to the - ground rail on the breadboard.
o	Connect the signal pin of the buzzer to pin 7 on the Arduino
4.	Sensor Connection:
o	Connect the GND pin of the KY-032 sensor to the - ground rail on the breadboard.
o	Connect the VCC pin of the KY-032 sensor to the + power rail on the breadboard.
o	Connect the OUT pin of the KY-032 sensor to pin 3 on the Arduino.
Procedure:
1.	Programming the Arduino:
o	Open the Arduino IDE on your computer.
o	Write or copy the provided code into the IDE.
o	Verify the code to check for errors.
o	Upload the code to the Arduino.
2.	Running the Experiment:
o	Once the code is uploaded, the green light should turn on immediately.
o	After 5 seconds, the yellow light will turn on for 2 seconds, followed by the red light.
o	When the red light is on, use a toy car (or similar object) to simulate passing through the intersection in front of the sensor.
o	If the car passes while the red light is on, the buzzer should sound immediately.
3.	Observations:
o	Record how the system behaves when the car passes under different light conditions.
o	Note the response time of the buzzer when the sensor detects the car.
4.	Conclusion:
o	Discuss how the system could be improved or extended. For example, what other types of sensors might be used to improve the safety of an intersection? Can you think of what data one would need to figure out the speed of a car approaching a red light? Could you use an obstacle avoidance sensor for that, or would you need something else?

Troubleshooting Tips:
•	If the traffic light module does not function as expected, check your wiring connections and ensure each LED pin is connected to the correct Arduino pin.
•	If the buzzer does not sound when the car passes during the red light, verify that the sensor is correctly connected and that the sensorPin in the code matches the pin you used.
•	Ensure the power and ground connections are secure on the breadboard and Arduino, and that your Arduino IDE “recognizes” the board.

Additional Challenges (Optional):
•	Consider how to modify the code to include a pedestrian crossing signal (a green LED would work) that only allows pedestrians to cross when the traffic light is red. What parts of the code would need to change, if any, and where? 





