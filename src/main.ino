#include <SPI.h>
#include "RFIDHandler.h"
#include "ServoHandler.h"
#include "LCDHandler.h"
#include "FeedbackHandler.h"

// Access UID
#define ACCESS_UID "29 28 4C D3"

void setup() {
    initializeSerial();
    initializeSPI();
    initializeRFID();
    initializeServo();
    initializeFeedback();
    initializeLCD();
}

void loop() {
    if (!mfrc522.PICC_ReadCardSerial()) return;

    // Extract UID from card
    String content = extractUID();

    // Check for access
    checkForAccess(content);
}

void initializeSerial() {
    Serial.begin(9600);
}

void initializeSPI() {
    SPI.begin();
}

void checkForAccess(String uid) {
    if (uid.substring(1) == ACCESS_UID) {
        grantAccess();
        positiveFeedback();
    } else {
        denyAccess();
        negativeFeedback();
    }
}
