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
//  
//  for(uint8_t i = 0; i < 9; i++)
//  {
//    points[i].xp = 0;
//    points[i].x_speed = random(1, 16);
//    points[i].flag = 1;
//  }
}

uint8_t smile_p[] = { //y-coordinate comes first!

1,3,
1,4,
1,5,
1,8,
1,9,
1,10,
2,2,
2,6,
2,7,
2,11,
3,2,
3,11,
4,2,
4,11,
5,3,
5,10,
6,4,
6,9,
7,5,
7,8,
8,6,
8,7,

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
