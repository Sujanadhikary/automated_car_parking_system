//ARDUINO (automatic car parking) 
//4TH SEMESTER MINI PROJECT [RVS COLLEGE OF ENGINEERING AND TECHNOLOGY]
//BY:- 1, UJJWAL SHARMA
//     2, SUAJN ADHIKARY
#include <Wire.h>           
#include <LiquidCrystal_I2C.h>    
LiquidCrystal_I2C lcd(0x27,16,2);   
 #include <Servo.h>   
 Servo myservo1;  
 const int IR1 = 4; // IR Sensor 1  
 const int IR2 = 7; // IR Sensor 2  
 const int buzzer = 2;
 const int ledred = 13;
 const int ledgreen = 11;
 int Slot = 5;      // Total number of parking Slots  
 int flag1 = 0;  
 int flag2 = 0; 

void displayname(string name, string roll_no){
        lcd.setCursor (0,0);
        lcd.print(name);
        lcd.setCursor (0,1);
        lcd.print(roll_no);
        delay (2000);
        lcd.clear();
}
  
 void setup()  
      {  
        lcd.init();      
        lcd.backlight();  
        pinMode(IR1, INPUT);  
        pinMode(IR2, INPUT);
        pinMode(ledred,OUTPUT);
        pinMode(ledgreen,OUTPUT);  
        myservo1.attach(9);  
        myservo1.write(100);  
        lcd.setCursor (0,0);  
        lcd.print(" PARKING SYSTEM ");  
        lcd.setCursor (0,1);  
        lcd.print("      By  ");  
        delay (2000);
        lcd.clear();
       string name[4] = {"Ujjwal Sharma", "Sujan Adhikary", "Pranchi Sinha", "Nidhi Kumari"};
       string roll_num = {" ECE/462/21L", " ECE/461/21L", " ECE/582/21L", " ECE/581/21L",}
       for(int i=0;i<4;i++){
         displayname(name[i],roll_num[i]);
       }

       
        lcd.setCursor (0,0);
        lcd.print("Ujjwal sharma");
        lcd.setCursor (0,1);
         lcd.print(" ECE/462/21L");
        delay (2000);
        lcd.clear();
        
        lcd.setCursor (0,0);
        lcd.print("Sujan Adhikary");
        lcd.setCursor(0,1);
         lcd.print(" ECE/461/21L"); 
        delay (2000);
        lcd.clear();

        lcd.setCursor (0,0);
        lcd.print(" Prachi Sinha");
        lcd.setCursor(0,1);
         lcd.print(" ECE/582/21L"); 
        delay (2000);
        lcd.clear();
        
        lcd.setCursor (0,0);
        lcd.print(" Nidhi Kuamri");
        lcd.setCursor(0,1);
         lcd.print(" ECE/581/21L"); 
        delay (2000);
        lcd.clear();
        
           
       } 

        
 void loop()
        {   
           if(digitalRead (IR1) == LOW && flag1==0)
                {  
                  if(Slot>0)
                       {
                        flag1=1;  
                           if(flag2==0)
                                {
                                  myservo1.write(0); 
                                  Slot = Slot-1;
                                  //if(digitalRead (IR1) == LOW){tone(buzzer, 3000);} if(digitalRead (IR1) == HIGH){noTone(buzzer);}
                     tone(buzzer, 4000);
                     delay(500);
                     noTone(buzzer);
                                 }
                        }else{  
                            lcd.setCursor (0,0);  
                            lcd.print("  SORRY :(  ");   
                            lcd.setCursor (0,1);  
                            lcd.print(" Parking Full "); 
                            tone(buzzer, 1000);
                            
                            digitalWrite(ledred, HIGH);
                            digitalWrite(ledgreen,LOW); 
                            delay (1000); 
                            lcd.clear();
                            if(digitalRead (IR1) == HIGH)
                                    {
                                      noTone(buzzer);   
                                    }
                              }  
                }  
 if(digitalRead (IR2) == LOW && flag2==0){flag2=1;  
 if(flag1==0){
  myservo1.write(0);
  digitalWrite(ledred,LOW);
  Slot = Slot+1;
  }  
 }  
 if(flag1==1 && flag2==1 && digitalRead (IR2) == HIGH){  
 delay (1000);  
 myservo1.write(100); 
 flag1=0, flag2=0;  
 }  
 lcd.setCursor (0,0);  
 lcd.print("  WELCOME!  ");  
 lcd.setCursor (0,1);  
 lcd.print("Slot Left: ");  
 lcd.print(Slot);
 digitalWrite(ledgreen,HIGH);  
 }  
