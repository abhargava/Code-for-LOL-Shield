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

0,0,
0,1,
0,2,
0,3,
0,5,
0,7,
0,9,
1,0,
1,1,
1,2,
1,3,
2,0,
2,1,
2,2,
2,3,
2,5,
3,0,
3,1,
3,2,
3,6,
4,4,
4,9,
5,0,
5,2,
6,5,
7,0,
7,3,

};

void smile()
{
  for(uint8_t i = 0; i < 27; i++)
  {
    LedSign::Set(smile_p[i*2+1],smile_p[i*2],1);    
  }
}

void loop()                     // run over and over again
{
  smile();

  delay(3000);
}
