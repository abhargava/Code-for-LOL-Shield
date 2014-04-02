
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int blueBulb = 12;
int orangeBulb = 3;

int incomingByte; 
int index = 0; //index incoming bytes into an array
int data[3]; //allocate some space for the bytes

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
    delay(100);
    
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    
    //store it:
    data[index] = incomingByte;
    index++;
    
    //test
    Serial.write(incomingByte);

    //if if's a char that matches any in the 'activity' set, store it:
    if ('A' == data[0]  || 'B' == data[0] || 'C' == data[0] || 'D' == data[0]){
       activity = data[0]; 
    } if ('E' == data[1] || 'F' == data[1] || 'G' == data[1] || 'H' == data[1]){
       sleep = data[1];
       // x = before 6pm, y = after 6pm 
    } if ('X' == data[2]|| 'Y' == data[2]){
       time = data[2];
      
      //add 32 statements here
      if(activity == 'A' && time == 'X'){
        digitalWrite(orangeBulb, HIGH);
        delay(delayA);
        digitalWrite(orangeBulb, LOW);
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

