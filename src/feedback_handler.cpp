#include "FeedbackHandler.h"

// Constants for Pins
#define LED_G 3
#define LED_R 2
#define BUZZER 6

void initializeFeedback() {
    pinMode(LED_G, OUTPUT);
    pinMode(LED_R, OUTPUT);
    pinMode(BUZZER, OUTPUT);
    noTone(BUZZER);
}

void positiveFeedback() {
    digitalWrite(LED_G, HIGH);
    tone(BUZZER, 500);
    delay(500);
    noTone(BUZZER);
    digitalWrite(LED_G, LOW);
}

void negativeFeedback() {
    digitalWrite(LED_R, HIGH);
    tone(BUZZER, 300);
    delay(1000);
    digitalWrite(LED_R, LOW);
    noTone(BUZZER);
}
