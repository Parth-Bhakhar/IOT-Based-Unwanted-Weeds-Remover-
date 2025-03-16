#include <SoftwareSerial.h> // library for software serial communication
#include <Servo.h> // library for servo motors

Servo myservo1, myservo2, myservo3, myservo4; // define servo names
SoftwareSerial bluetooth(9,10); // define software serial communication using pins 9 and 10

void setup() {
myservo1.attach(A5); // attach servo 1 to pin A5
myservo2.attach(A4); // attach servo 2 to pin A4
myservo3.attach(A3); // attach servo 3 to pin A3
myservo4.attach(A2); // attach servo 4 to pin A2

myservo1.write(120);
myservo2.write(20);
myservo3.write(150);
myservo4.write(135);
//130
Serial.begin(9600); // start serial communication with computer
bluetooth.begin(9600); // start serial communication with bluetooth
}

void loop()
{ 
  myservo1.write(120);
myservo2.write(20);
myservo3.write(150);
myservo4.write(135);

    for(int i=0;i<160;i++)
    {
      myservo2.write(i);
      delay(12);
    }
//    for(int i=80;i<110;i++)
  //  {
    //  myservo4.write(i);
     // delay(10);
    //} 

    for(int i=150;i>60;i--)
    {
      myservo3.write(i);
      delay(10);
    } 
  for(int i=135;i>80;i--)
    {
      myservo4.write(i);
     delay(5);
    }

    delay(2000);
    for(int i=60;i<120;i++)
    {
      myservo3.write(i);
      delay(5);
    }
    
    for(int i=140;i>0;i--)
    {
      myservo2.write(i);
      delay(5);
    }
    /*
    for(int i=140;i>0;i--)
    {
      myservo2.write(i);
      delay(5);
    }
    for(int i=30;i<140;i++)
    {
      myservo1.write(i);
      delay(12);
    }
    
    for(int i=0;i<70;i++)
    {
      myservo2.write(i);
      delay(5);
    }
    */
    for(int i=70;i>0;i--)
    {
      myservo2.write(i);
      delay(5);
    }
    for(int i=110;i>0;i--)
    {
      myservo1.write(i);
      delay(5);
    }
    for(int i=0;i<70;i++)
    {
      myservo2.write(i);
      delay(5);
    }
    for(int i=80;i<135;i++)
    {
      myservo4.write(i);
      delay(10);
    } 
    delay(1000);
    for(int i=70;i>0;i--)
    {
      myservo2.write(i);
      delay(5);
    }
    myservo1.detach();
    myservo2.detach();
    myservo3.detach();
    myservo4.detach();
    while (1);
}