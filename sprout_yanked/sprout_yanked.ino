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
  8,1,
  7,1,
  6,2,
  5,3,
  5,4,
  5,5,
  5,6,
  5,7,
  5,8,
  5,9,
  5,10,
  6,11,
  7,12,
  8,12


};

void smile()
{
  for(uint8_t i = 0; i < 20; i++)
  {
    LedSign::Set(smile_p[i*2+1],smile_p[i*2],1);    
  }
}

void loop()                     // run over and over again
{
  smile();

  delay(3000);
}
