#include <LobotServoController.h>
LobotServoController myse;
char comchar;  



void setup()
{
	Serial.begin(9600);
	Serial1.begin(9600);
  Serial2.begin(9600);
  Serial3.begin(9600);

	while (Serial1.read() >= 0) {}//clear serialbuffer  
  while (Serial2.read() >= 0) {}
  while (Serial3.read() >= 0) {}

}

void loop()
{
	/*Serial.print(Serial1.read());
  /* add main program code here */
	while (Serial1.available()>0) {
  
		comchar = Serial1.read();
		Serial.print(comchar);
    delay(100);
    if(comchar=='A')
    {
      while (!Serial);

          digitalWrite(13, HIGH);
          myse.runActionGroup(1, 0); //左
          delay(25000);
          myse.stopActionGroup();//停止动作组运行
          digitalWrite(13,LOW);
    }
		
	}
 while (Serial2.available()>0) {
  
   comchar = Serial2.read();
    delay(100);

    if(comchar=='A')
    {
        while (!Serial);
          Serial.print(comchar);
          digitalWrite(13, HIGH);
          myse.runActionGroup(2, 0); //中
          delay(25000);
          myse.stopActionGroup();//停止动作组运行
          digitalWrite(13,LOW);
         

    }
  }
  while (Serial3.available()>0) {
  
    comchar = Serial3.read();
    Serial3.print(comchar);
    delay(100);
    if(comchar=='A')
    {
      while (!Serial);

          digitalWrite(13, HIGH);
          myse.runActionGroup(3, 0); //左
          delay(25000);
          myse.stopActionGroup();//停止动作组运行
          digitalWrite(13,LOW);
    }
    
    
  }
  if(comchar=='B')
    {
        while (!Serial);
          Serial.print(comchar);
          digitalWrite(13, HIGH);
          myse.runActionGroup(4, 0); //右
          delay(15000);
          myse.stopActionGroup();//停止动作组运行
          digitalWrite(13,LOW);

    }
    if(comchar=='C')
    {
      while (!Serial);
          Serial.print(comchar);
          digitalWrite(13, HIGH);
          myse.runActionGroup(0, 0); //左
          delay(500);
          myse.stopActionGroup();//停止动作组运行
          digitalWrite(13,LOW);
         

    }
  
}
