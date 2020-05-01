#include<Servo.h>
#include<SoftwareSerial.h>
int i,angle,data;
Servo s[10];  //putting 10 servo object in s array variable
SoftwareSerial pin(2,3);//rx,tx
void setup() {
for(i=0;i<10;i++)
{
  s[i].attach(4+i);//4,5,6,7,8,9,10,11,12,13 declared pwm pins
                   
}
Serial.begin(9600);
Serial.println("Hi there!");

pin.begin(9600);
}
void loop() 
{
if(pin.available()>0)
{
 s[6].write(angle=0);
 data=pin.read(); // store the data in datavariable
    Serial.println(data);
    if(data==1)
    {
      for(i=0;i<5;i++)
      {
        s[i].write(angle=0);
      }
    }
    else if(data==0)
    
     {
      for(i=0;i<5;i++)
      {
        s[i].write(angle=180);
      }
    }
}
else
{
  s[6].write(angle=55);
  
}

  
}
 
