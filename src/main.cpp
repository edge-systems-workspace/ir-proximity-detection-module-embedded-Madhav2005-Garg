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

// ... setup code from above ...

void loop() {
    // Read digital state from IR sensor
    sensorState = digitalRead(IR_PIN);

    // Active-low logic: LOW signal indicates obstacle presence
    if (sensorState == LOW) {
        Serial.println("Obstacle Detected");
    } else {
        Serial.println("No Obstacle");
    }
}