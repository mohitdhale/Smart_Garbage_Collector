  #include <Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
 
int servoPos = 0;

void setup()
{
  servo1.attach(3);
  servo2.attach(5);
  servo3.attach(6);
  servo4.attach(9);
}
  void loop()
  {
    
for(servoPos=0;servoPos<90;servoPos++)
   { 
      servo1.write(servoPos);
      
      delay(50);
    
   }
   delay(3000);
for(servoPos=0;servoPos<40;servoPos++)
   { 
      servo3.write(servoPos);
      
      delay(50);

    }
 for(servoPos=120;servoPos<180;servoPos++)
   { 
      servo2.write(servoPos);
      
      delay(150);
     }


for(servoPos=40;servoPos>0;servoPos--)
   { 
      servo3.write(servoPos);
      
      delay(50);
    }
  for(servoPos=180;servoPos>120;servoPos--)
   { 
      servo2.write(servoPos);
      
      delay(150);
    
   }

 
 for(servoPos=90;servoPos>0;servoPos--)
   { 
      servo1.write(servoPos);
      
      delay(50);
    
   }
    
    
   for(servoPos=0;servoPos<180;servoPos++)
   { 
      servo4.write(servoPos);
      
      delay(15);
    
   }
   for(servoPos=180;servoPos>0;servoPos--)
   {
     servo4.write(servoPos);
     delay(15);
   }
    
  }
