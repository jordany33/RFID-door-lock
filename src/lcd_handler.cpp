#include "LCDHandler.h"

// Constants for Messages
#define LCD_MESSAGE1 "Money Talks!"
#define LCD_MESSAGE2 "BS Walks!"

// Initialize the library with the numbers of the interface pins 
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void initializeLCD() {
    lcd.begin(16, 2);
    lcd.print(LCD_MESSAGE1);
    lcd.setCursor(0, 1);
    lcd.print(LCD_MESSAGE2);
}
