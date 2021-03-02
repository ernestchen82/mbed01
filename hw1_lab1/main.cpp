#include "mbed.h"


DigitalOut myLED(LED3);

DigitalOut myLED2(LED1);


void Led(DigitalOut &ledpin, int t);


int main()

{

   myLED = 1;

   myLED2 = 1;

   while (true)

   {

      Led(myLED, 3);

      Led(myLED2, 2);

   }

}