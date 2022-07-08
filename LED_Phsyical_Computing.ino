#include "LedControl.h"
 
LedControl lc = LedControl(12, 11, 10, 1);
 
byte a[8] = { B10000001, B01000010, B00100100, B00011000, B00011000, B00100100, B01000010, B10000001};
//https://dotmatrix.5corpion.dev/   make your own shape!!!

void setup()
{

  lc.shutdown(0, false);

  lc.setIntensity(0, 8);

  lc.clearDisplay(0);
}
 
 

void loop()
{
 
  for (int row = 0; row < 8; row++)
  {
    lc.setRow(0, row, a[row]);  
    delay(25);
  }
}
