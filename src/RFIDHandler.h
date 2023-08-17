#ifndef RFIDHANDLER_H
#define RFIDHANDLER_H

#include <MFRC522.h>

// Initialize the RFID reader
void initializeRFID();

// Extract UID from the RFID card
String extractUID();

#endif
