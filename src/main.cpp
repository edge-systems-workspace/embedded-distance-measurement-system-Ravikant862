#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Measures distance using HC-SR04 ultrasonic sensor
 * and displays structured output via Serial Monitor.
*/






 // TODO 1:
  int echopin=10;
 // Define TRIG pin (Use pin 9)

 // TODO 2:
    int trigpin=9;

 // Define ECHO pin (Use pin 10)

 // TODO 3:
  int buzzpin=12;
 // Create variable to store duration

 // TODO 4:

 // Create variable to store calculated distance

void setup() {

    // TODO 5:


    Serial.begin(9600);
    // Initialize Serial communication (9600 baud rate)

    // TODO 6:
    pinMode(trigpin,OUTPUT);
    // Configure TRIG as OUTPUT

    // TODO 7:
    pinMode(echopin,INPUT);
    // Configure ECHO as INPUT

    // TODO 8:
    // Print system initialization message
}

void loop() {






 Serial.println("cm");
 delay(500);


    // TODO 9:
    digitalWrite(trigpin,0);
    delayMicroseconds(2);
    // Set TRIG LOW for 2 microseconds

    // TODO 10:
    digitalWrite(trigpin,1);
    delayMicroseconds(10);
    digitalWrite(trigpin,0);
    // Send 10 microsecond pulse on TRIG

    // TODO 11:
    long duration=pulseIn(echopin,1);
    // Measure pulse duration on ECHO using pulseIn()

    // TODO 12:
    long distance=(duration*0.034)/2;
    // Calculate distance in cm

    // TODO 13:
 Serial.print("Distance");
 Serial.print(distance);
    // Print calculated distance

    // TODO 14:
    // Add delay (500ms)
}
