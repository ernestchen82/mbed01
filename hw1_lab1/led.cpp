#include "mbed.h"


void Led(DigitalOut &ledpin, int t)

{

   for (int i = 0; i < t * 2; ++i)

   {                     //blink for t times

      ledpin = !ledpin; // toggle led

      ThisThread::sleep_for(100ms);

   }

}