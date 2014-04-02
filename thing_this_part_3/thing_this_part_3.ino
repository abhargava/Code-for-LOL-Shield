
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

int letter = 'N';

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
    delay(100);
    
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();

      //trying switch statement
      switch(letter){
        
        case 'A':
          digitalWrite(orangeBulb, HIGH);
          delay(delayA);
          digitalWrite(orangeBulb, LOW);
          delay(forever);
          
        case 'D':
          digitalWrite(blueBulb, HIGH);
          delay(delayA);
          digitalWrite(blueBulb, LOW);
          delay(forever);
      }
    }
    }
      
      
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

