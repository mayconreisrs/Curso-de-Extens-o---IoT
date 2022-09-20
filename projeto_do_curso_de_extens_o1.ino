// C++ code
//
#include <LiquidCrystal.h>

LiquidCrystal lcd_6(12, 13, 7, 6, 5, 4);

void setup()
{
  lcd_6.begin(16, 2); // Set up the number of columns and rows on the LCD.
  pinMode(A2, INPUT);
}

void loop()
{
  lcd_6.setCursor(5, 1);
  lcd_6.print((-40 + 0.488155 * (analogRead(A2) - 20)));
  delay(1000); // Wait for 1000 millisecond(s)
}