#include <String.h>

#include <SoftwareSerial.h>
#include <LiquidCrystal_I2C.h>     //LiquidCrystal 라이브러리 추가 
LiquidCrystal_I2C lcd(0x27, 16, 2);  //lcd 객체 선언
#include <IRremote.h>
 
SoftwareSerial bluetooth(8,7);
  using namespace std;
String temp;
String ay;
String ax;
String bp[15];
int SLAVE[6] = {1, 2, 3, 4, 5,6}; 
int RECV_PIN = 11; 
String x;
char ee[64];
IRrecv irrecv(RECV_PIN);
decode_results results;
void setup()
{ bluetooth.begin(9600);
  lcd.begin(); //LCD 사용 시작
   lcd.print("Your car number?");
   irrecv.enableIRIn(); // Start the receiver
    Serial.begin(9600); 
}

void loop()
{
   if (bluetooth.available()) {
    Serial.write(bluetooth.read());
  }
  if (Serial.available()) {
    bluetooth.write(Serial.read());
  }
  
  
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
    if (irrecv.decode(&results)) {
    switch (results.value) {    
    case 16738455 : x+="1"; break;
    case 16750695 : x+="2"; break;
    case 16756815 : x+="3"; break;
    case 16724175 : x+="4"; break;
    case 16718055 : x+="5"; break;
    case 16743045 : x+="6"; break;
    case 16716015 : x+="7"; break;
    case 16726215 : x+="8"; break;
    case 16734885 : x+="9"; break;
    case 16730805 : x+="0"; break;
    case 16728765 : x=x.substring(0,x.length()-1); break;
    case 16712445 : ; break;  //ok버튼
    
    case 16720605 : start(1);
                
                    break;  //좌버튼(입차)
    case 16761405 : start(2);   
                  
                    break; //우버튼(출차)
    default : ; break;
  }
  x.trim();
        lcd.println(x);
        irrecv.resume(); // Receive the next value
  /*      Serial.print(results.value);
        Serial.print("\b");       
        Serial.print("\n");*/
    }
     

  
}


void start(int a){ //1입차 2출차
  if(a==1) 
{
   for(int i=0;i<11;i++)
  {
    if(bp[i].equals(NULL))
    {
      bp[i]=x;
      i++;
        x.toCharArray(ee,x.length()+1);
                    bluetooth.write(ee);
                    bluetooth.write("입차"); 
       x="";
       lcd.println(x);
       Serial.print("입차");
       Serial.print(i);
       break;
       
     }
    else if(i==10)
    {
      lcd.setCursor(0, 0);
       lcd.print("no place");
        delay(2000);
       lcd.print("Your car number?");
      }
  }
 }
 
  else if(a==2)
  {
    for(int i=0;i<11;i++)
  {
    if(bp[i].equals(x))
    {
      bp[i]="";
      i+=12;
       x.toCharArray(ee,x.length()+1);
                    bluetooth.write(ee);
                    bluetooth.write("출차"); 
       x="";
        lcd.println(x);
       Serial.print("출차");
       Serial.print(i);
       break;
       }
    else if(i==10)
    { lcd.setCursor(0, 0);
       lcd.print("Error");
       delay(2000);
       lcd.setCursor(0, 0);
       lcd.print("Your car number?");
      }
  }
    }
  
  
 
 
 }
