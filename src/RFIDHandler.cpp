#include "RFIDHandler.h"

// Constants for Pins
#define SS_PIN 53
#define RST_PIN 5

// Create MFRC522 instance
MFRC522 mfrc522(SS_PIN, RST_PIN); 

void initializeRFID() {
    mfrc522.PCD_Init();
}

String extractUID() {
    String content = "";
    for (byte i = 0; i < mfrc522.uid.size; i++) {
        content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
        content.concat(String(mfrc522.uid.uidByte[i], HEX));
    }
    content.toUpperCase();
    return content;
}
