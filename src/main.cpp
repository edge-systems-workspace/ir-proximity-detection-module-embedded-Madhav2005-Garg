#include <Arduino.h>

#define IR_PIN 2

int sensorState = 0;

// ... previous code ...

void setup() {
    Serial.begin(9600);

    // Configure IR sensor pin as input
    pinMode(IR_PIN, INPUT);

    Serial.println("IR Obstacle Detection System - Initialized");
    delay(1000);
}

void loop() {
}