
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int blueBulb = 12;
int orangeBulb = 3;

int incomingByte; 
int activity;
int sleep;
int time;

int delayS = 1000;
int delayA = 5000;
int delayB = 10000;
int delayC = 15000;
int delayD = 20000;
int forever = 3600000;


void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  delay(1000);

  
  // initialize the bulbs as outputs:
  pinMode(blueBulb, OUTPUT);
  pinMode(orangeBulb, OUTPUT);
}

void loop() {
 
    // see if there's incoming serial data:
    if (Serial.available() > 0) {
    
    //add a buffer:
    delay(1000);
    
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();

    //if if's a char that matches any in the 'activity' set, store it:
    if (incomingByte == 'A' || incomingByte == 'B'|| incomingByte == 'C' || incomingByte == 'D'){
       activity = incomingByte; 
    } else if (incomingByte == 'E' || incomingByte == 'F'|| incomingByte == 'G'|| incomingByte == 'H'){
       sleep = incomingByte;
       // x = before 6pm, y = after 6pm 
    } else if (incomingByte == 'X'|| incomingByte == 'Y'){
       time = incomingByte;
      
      //add 32 statements here
      if(activity == 'A' && sleep =='H' && time == 'Y'){
        digitalWrite(blueBulb, HIGH);
        delay(delayC);
        digitalWrite(blueBulb, LOW);
        delay(forever);
      }
    }
    }}
      
      
//       if(activity == 'A'){
//        digitalWrite(blueBulb, HIGH);
//        digitalWrite(led1, HIGH);
//        digitalWrite(led2, HIGH);
//        delay(delayB);
//        digitalWrite(led2, LOW);
//        delay(delayA);
//        digitalWrite(led1, LOW);
//        digitalWrite(blueBulb, LOW);
//        digitalWrite(led1, LOW);
//        digitalWrite(led2, LOW);   
//        delay(delayA);
//        digitalWrite(orangeBulb, HIGH);
//        delay(delayB);
//        digitalWrite(orangeBulb, LOW);
//        delay(forever);
//       }
       
//    }
//  } 
  
  
//}

