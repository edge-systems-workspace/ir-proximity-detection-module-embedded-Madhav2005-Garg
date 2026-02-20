#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 */

#define IR_PIN 2
int sensorState = 0;

void setup() {
    Serial.begin(9600);
    pinMode(IR_PIN, INPUT);
    Serial.println("IR Obstacle Detection System - Initialized");
    delay(1000);
}

void loop() {
    sensorState = digitalRead(IR_PIN);

    if (sensorState == LOW) {
        Serial.println("Obstacle Detected");
    } else {
        Serial.println("No Obstacle");
    }

    // Small delay to stabilize output and prevent buffer overflow
    delay(300);
}