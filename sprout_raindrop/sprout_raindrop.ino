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
0,6,
1,6,
1,7,
2,5,
2,6,
2,7,
2,8,
3,4,
3,5,
3,6,
3,7,
3,8,
3,9,
4,4,
4,5,
4,6,
4,7,
4,8,
4,9,
4,5,
5,4,
5,5,
5,6,
5,7,
5,8,
5,9,
6,4,
6,5,
6,6,
6,7,
6,8,
6,9,
7,5,
7,6,
7,7,
7,8,

};

void smile()
{
  for(uint8_t i = 0; i < 36; i++)
  {
    LedSign::Set(smile_p[i*2+1],smile_p[i*2],1);    
  }
}

void loop()                     // run over and over again
{
  smile();

  delay(3000);
}
