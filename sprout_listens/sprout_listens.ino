/*
Expressions for Sprout
*/
#include "Charliplexing.h"

struct point {
  uint8_t xp;        // Point Position in X direction (multplied by 16)
  uint8_t x_speed;   // Speed
  uint8_t flag;  
} points[9];

void setup()                    // run once, when the sketch starts
{
  LedSign::Init();
  
  for(uint8_t i = 0; i < 9; i++)
  {
    points[i].xp = 0;
    points[i].x_speed = random(1, 16);
    points[i].flag = 1;
  }
}

uint8_t smile_p[] = { //y-coordinate comes first!
//left eye
  3,3,
  2,4,
  3,5,

//right eye
  3,7,
  2,8,
  3,9,

 //mouth 
  6,3,
  6,4,
  6,5,
  6,6,
  6,7,
  6,8,
  6,9,
  6,10,


};

void smile()
{
  for(uint8_t i = 0; i < 14; i++)
  {
    LedSign::Set(smile_p[i*2+1],smile_p[i*2],1);    
  }
}

void loop()                     // run over and over again
{
  smile();

  delay(3000);
}
