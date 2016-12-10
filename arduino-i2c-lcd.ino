/*By: T.K.Hareendran/TechNode Protolabz
Modified By: Isaac Sesi - Current City
Date: December 2016
*/

#include "Wire.h" // For I2C
#include "LCD.h" // For LCD
#include "LiquidCrystal_I2C.h" // Added library*
//Set the pins on the I2C chip used for LCD connections
//ADDR,EN,R/W,RS,D4,D5,D6,D7
LiquidCrystal_I2C lcd(0x3F,2,1,0,4,5,6,7); // 0x27 is the default I2C bus address of the backpack


void setup()
{
   // Set off LCD module
   lcd.begin (16,2); // 16 x 2 LCD module
   lcd.setBacklightPin(3,POSITIVE); // BL, BL_POL
   lcd.setBacklight(HIGH);
}
void loop()
{
   lcd.home (); // Set cursor to 0,0
  lcd.print("Hello");
    lcd.setCursor(0,1);
  lcd.print("World! ");



}
