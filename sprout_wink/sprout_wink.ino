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
  2,3,
  2,4,
  3,3,
  3,4,

//right eye
  3,7,
  2,8,
  3,9,

 
 //mouth 
  4,1,
  5,1,
  6,2,
  7,3,
  7,4,
  7,5,
  7,6,
  7,7,
  7,8,
  7,9,
  7,10,
  6,11,
  5,12,
  4,12

};

void smile()
{
  for(uint8_t i = 0; i < 22; i++)
  {
    LedSign::Set(smile_p[i*2+1],smile_p[i*2],1);    
  }
}

void loop()                     // run over and over again
{
  smile();

  delay(3000);
}
