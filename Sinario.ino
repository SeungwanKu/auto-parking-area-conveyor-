#include <Wire.h>
#include <String.h>
//헤야할것 입력한 문자열(프로토콜)을 ,단위로 나누어서 사용할수 있게 해주는 코드가 필요 ex)1,a,3,9 는 1번 a형태 3초간 90도 
// 슬레이브 주소
int SLAVE[20] = {1, 2, 3, 4, 5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}; 

void setup() {
  // Wire 라이브러리 초기화
  Wire.begin(); 
  // 직렬 통신 초기화
  Serial.begin(9600); 
  
}

void loop() {
  i2c_communication(19);
  
  delay(500);
  if (Serial.available()) {
   
     String e = Serial.readString();   
    int a=e.indexOf("#");
    int a1=e.indexOf("@");
   String s=e.substring(a+1,a1);    
    int i= s.toInt();
    
    Serial.print("path ");
    Serial.print(i);
   tlf(i);
   
   }


   
    } 

void tlf(int a){
        
   switch(a){
  
    case 1 : //1번 경로 실행
      
       Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+a,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        delay(2000); 
      
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(2000);
      
       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+a,2,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,+a,1,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,+b,2,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
        delay(3000);

       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,+a,1,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
        delay(3000);
        
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+a,2,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
         delay(2000);
         
       Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#11,+a,2,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 확인
         delay(2000);
         
       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,+a,1,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
        delay(2000);
       
       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,-b,3,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
         
        break;


    case 2 : //2번 경로 실행
       Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+a,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        delay(2000); 
      
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(2000);
      
       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+a,2,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,+a,1,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,+b,2,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
        delay(3000);
        
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+a,2,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
         delay(2000);
         
       Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#11,+a,2,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 확인
         delay(2000);
       
       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,-b,3,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
      
        break;

          
    case 3 : //3번 경로 실행
        Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+a,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        delay(2000); 
      
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(2000);
      
       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+a,2,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,+a,1,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,+b,2,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
        delay(3000);
        
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+a,2,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
         delay(2000);
         
       
       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,-b,3,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
      
        break;
      

    case 4 : //4번 경로 실행
      
       Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+a,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
         delay(2000);
      
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
         delay(2000);
      
       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+a,1,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
       delay(2000);
    
       

       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+b,3,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(3000);

         Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+a,2,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(3000);
       
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+b,2,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(2500);


       Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#11,+b,2,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 확인
        delay(2500);

        
       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,+b,1,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
        delay(2500);
        
       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,-b,3,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        break;

        case 5 : //5번 경로 실행
              Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+a,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
         delay(2000);
      
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
         delay(2000);
      
       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+a,1,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
       delay(2000);
    
       

       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+b,3,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(3000);

         Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+a,2,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(3000);
       
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+b,2,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(2500);


       Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#11,+b,2,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 확인
        delay(2500);

       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,-b,3,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        break;
       

        case 6 : //6번 경로 실행
      
         Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+a,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
         delay(2000);
      
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
         delay(2000);
      
       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+a,1,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
       delay(2000);
    
       

       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+b,3,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(3000);

         Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+a,2,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(3000);
       
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+b,2,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(2500);

       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,-b,3,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        break;
      
      case 7 : //7번 경로 실행
      
        Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+a,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
         delay(2000);
      
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
         delay(2000);
    
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+b,3,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(3000);

         Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(3000);
       
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+c,2,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(2500);


       Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#11,+c,2,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 확인
        delay(2500);

        
       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,+c,1,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
        delay(2500);
        
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,-b,3,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        break;

       case 8 : //8번 경로 실행
          Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+a,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
         delay(2000);
      
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
         delay(2000);
    
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+b,3,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(3000);

         Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(3000);
       
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+c,2,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(2500);


       Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#11,+c,2,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 확인
        delay(2500);
 
        
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,-b,3,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        break;
      

       case 9 : //9번 경로 실행
      
      Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+a,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
         delay(2000);
      
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
         delay(2000);
    
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+b,3,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(3000);

         Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(3000);
       
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+c,2,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(2500);


       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,-b,3,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        break;
        
      case 10 : //10번 경로 실행
      
     Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+b,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
         delay(2000);

       Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+a,1,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
         delay(2000);
      
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+d,2,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(2500);


       Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#11,+d,2,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 확인
        delay(2500);

       Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,-b,3,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        break;

      case 11 : //11번 경로 실행
      
     Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+b,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
         delay(2000);

       Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+a,1,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
         delay(2000);
      
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+d,2,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(2500);

       Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,-b,3,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        break;

      case 13 : //13번 경로 실행(1번 주차공간 출차)
      
       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,+a,1,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
      delay(2000);
      
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+a,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(1500);
      
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,-b,3,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);

       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+a,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);
    
        
       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+a,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,-b,2,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(2000);

        Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+a,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(2000);

       Wire.beginTransmission(SLAVE[13]); //전송시작
       Wire.write("#9,+c,4,9@"); 
       Wire.endTransmission(SLAVE[13]); //전송 끝
        i2c_communication(8);//명력도착여부 확인
       delay(5000);

      Wire.beginTransmission(SLAVE[7]); //전송시작
      Wire.write("#8,+b,3,9@"); 
      Wire.endTransmission(SLAVE[7]); //전송 끝
       i2c_communication(7); //명력도착여부 확인
       delay(2000);

      Wire.beginTransmission(SLAVE[8]); //전송시작
      Wire.write("#9,+b,3,9@"); 
      Wire.endTransmission(SLAVE[8]); //전송 끝
       i2c_communication(8); //명력도착여부 확인

       Wire.beginTransmission(SLAVE[11]); //전송시작
      Wire.write("#12,+a,3,9@"); 
      Wire.endTransmission(SLAVE[11]); //전송 끝
       i2c_communication(11); //명력도착여부 확인
       
      Wire.beginTransmission(SLAVE[10]); //전송시작
      Wire.write("#11,+a,3,9@"); 
      Wire.endTransmission(SLAVE[10]); //전송 끝
       i2c_communication(10); //명력도착여부 확인
       
      Wire.beginTransmission(SLAVE[9]); //전송시작
      Wire.write("#10,+a,3,9@"); 
      Wire.endTransmission(SLAVE[9]); //전송 끝
       i2c_communication(9); //명력도착여부 확인
        break;

      case 14 : //14번 경로 실행(2번 주차공간 출차)
      
       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,+a,1,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
        delay(2000); 
      
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+a,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+b,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000); 

       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+b,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(2000); 
      
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+a,2,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000); 
    
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+a,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,-b,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(3000);

       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,-b,2,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);
      
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+b,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#11,+a,2,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 확인
        delay(2000);
           
       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,+a,2,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
        delay(2000);  
        
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+a,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,-b,2,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+a,2,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+a,5,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8);//명력도착여부 확인
        delay(2000);

       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+b,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);
      
       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,-b,2,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
       delay(2000);

       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+a,2,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
       delay(2000);

       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+c,2,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
       delay(2000);
       
      Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+b,2,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
       delay(2000);
       
      Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,-b,2,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(2000);

       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,-b,4,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);

        Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+a,2,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(2000);

       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+a,4,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);

        Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+b,2,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(2000);

       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+b,4,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);

      Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,-a,4,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);

        Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,-a,4,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
        delay(2000);

         Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+a,4,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(2000);

        Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#11,+a,4,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 확인
        break;

     case 15 : //15번 경로 실행(3번 주차공간 출차)

       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,+b,1,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,-a,1,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(1000);
       
       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,-a,1,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,-b,1,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,+a,1,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
        break;


      case 16 : //16번 경로 실행(4번 주차공간 출차)
      
       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,+b,2,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
        delay(1000);
      
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+a,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);
      
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,-b,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);
    
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,-b,2,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(1000);
        
        Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+a,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);
    
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+a,2,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+a,2,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+b,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);
    
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+b,2,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(1000);

         Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,-b,2,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);

         Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+c,2,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);

         Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+b,2,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        break;

      case 17 : //17번 경로 실행(5번 주차공간 출차)
      
       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,+b,2,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
        delay(1000);
      
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+a,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+b,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+b,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);
      
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+a,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+a,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,-b,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,-b,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);
      
       Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#11,+b,1,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,+b,1,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+a,2,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,-b,2,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,-b,2,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(1000);;

        Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+a,2,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+a,2,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(1000);;

       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+a,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+b,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인

       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+b,2,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
       delay(1000);

       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,-b,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+a,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+c,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+b,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
         delay(1000);

        Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,-b,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,-b,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
         delay(1000);

         Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+a,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+a,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
         delay(1000);

         Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+b,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+b,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
         delay(1000);

         Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,-a,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
         delay(1000);

         Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,-b,1,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
         delay(1000);

         Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+b,1,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
         delay(1000);

         Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#11,+b,1,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 확인
        break;

     case 18 : //18번 경로 실행(6번 주차공간 출차)
     
       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+b,1,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,-b,1,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(1000);

      Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,-a,1,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,-b,1,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+a,1,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,+a,1,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
        break;


       case 19 : //19번 경로 실행(7번 주차공간 출차)
      
       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,+c,2,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(1000);
      
       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+a,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);
      
       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,-b,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);
    
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,-b,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,-b,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(1000);
        
        Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+a,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);
    
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+a,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+a,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(1000);

      Wire.beginTransmission(SLAVE[8]); //전송시작
      Wire.write("#9,+a,1,9@"); 
      Wire.endTransmission(SLAVE[8]); //전송 끝
       i2c_communication(8); //명력도착여부 확인
       delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+b,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);
    
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+b,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+b,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(1000);

      Wire.beginTransmission(SLAVE[8]); //전송시작
      Wire.write("#9,-b,1,9@"); 
      Wire.endTransmission(SLAVE[8]); //전송 끝
       i2c_communication(8); //명력도착여부 확인
       delay(1000);

       Wire.beginTransmission(SLAVE[8]); //전송시작
      Wire.write("#9,+c,1,9@"); 
      Wire.endTransmission(SLAVE[8]); //전송 끝
       i2c_communication(8); //명력도착여부 확인
       delay(1000);

       Wire.beginTransmission(SLAVE[8]); //전송시작
      Wire.write("#9,+b,1,9@"); 
      Wire.endTransmission(SLAVE[8]); //전송 끝
       i2c_communication(8); //명력도착여부 확인
        break;

      case 20 : //20번 경로 실행(8번 주차공간 출차)
      
       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,+c,2,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
        delay(1000);
      
       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+a,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+b,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[4]); //전송시작
       Wire.write("#5,+b,1,9@"); 
       Wire.endTransmission(SLAVE[4]); //전송 끝
        i2c_communication(4); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+a,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[4]); //전송시작
       Wire.write("#5,+a,1,9@"); 
       Wire.endTransmission(SLAVE[4]); //전송 끝
        i2c_communication(4); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[4]); //전송시작
       Wire.write("#5,-b,1,9@"); 
       Wire.endTransmission(SLAVE[4]); //전송 끝
        i2c_communication(4); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,-b,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);
    
       Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#11,+c,1,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,+c,1,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+a,2,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,-b,2,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,-b,2,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);
      
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,-b,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+a,2,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+a,2,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);
      
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+a,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+a,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+b,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(1000);
       
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+b,2,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+b,2,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,-b,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+a,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+c,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+b,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[4]); //전송시작
       Wire.write("#5,-b,1,9@"); 
       Wire.endTransmission(SLAVE[4]); //전송 끝
        i2c_communication(4); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,-b,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);

         Wire.beginTransmission(SLAVE[4]); //전송시작
       Wire.write("#5,+a,1,9@"); 
       Wire.endTransmission(SLAVE[4]); //전송 끝
        i2c_communication(4); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+a,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[4]); //전송시작
       Wire.write("#5,+b,1,9@"); 
       Wire.endTransmission(SLAVE[4]); //전송 끝
        i2c_communication(4); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+b,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,-a,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,-c,1,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(11); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,+c,1,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#11,+c,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        break;


     case 21 : //21번 경로 실행(9번 주차공간 출차)
     
       Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+b,1,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,-c,1,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,-a,1,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,-b,1,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,1,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+a,1,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(1000);
        
        Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,+a,1,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
        break;

     case 22 : //22번 경로 실행(10번 주차공간 출차)

       Wire.beginTransmission(SLAVE[11]); //전송시작
       Wire.write("#12,+d,2,9@"); 
       Wire.endTransmission(SLAVE[11]); //전송 끝
        i2c_communication(10); //명력도착여부 확인
        delay(2500);
        
       Wire.beginTransmission(SLAVE[4]); //전송시작
       Wire.write("#5,+a,1,9@"); 
       Wire.endTransmission(SLAVE[4]); //전송 끝
        i2c_communication(4); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[4]); //전송시작
       Wire.write("#5,-b,1,9@"); 
       Wire.endTransmission(SLAVE[4]); //전송 끝
        i2c_communication(4); //명력도착여부 확인
        delay(1000); 
       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,-b,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,-b,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);        
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,-b,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);
        
        Wire.beginTransmission(SLAVE[4]); //전송시작
       Wire.write("#5,+a,1,9@"); 
       Wire.endTransmission(SLAVE[4]); //전송 끝
        i2c_communication(4); //명력도착여부 확인
        delay(1000);
       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+a,2,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+a,2,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(2000);        
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+a,2,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+a,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);

       Wire.beginTransmission(SLAVE[4]); //전송시작
       Wire.write("#5,+b,1,9@"); 
       Wire.endTransmission(SLAVE[4]); //전송 끝
        i2c_communication(4); //명력도착여부 확인
        delay(1000); 
       Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,+b,1,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 확인
        delay(1000);
       Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,+b,1,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 확인
        delay(1000);        
       Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,+b,1,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 확인
        delay(2000);
        
       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,-b,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);
        
       Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+c,2,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        delay(1000);
        
         Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,+b,1,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 확인
        break;

    case 23 : //23번 경로 실행(11번 주차공간 출차)

       Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+c,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        delay(1000);

      Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#11,-d,2,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,-d,2,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,-a,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,-b,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+a,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+a,2,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,+a,2,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
       break;
    
    case 24 : //24번 경로 실행(12번 주차공간 출차)
    
      Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+c,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,-d,2,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,-a,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,-b,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[0]); //전송시작
       Wire.write("#1,+a,2,9@"); 
       Wire.endTransmission(SLAVE[0]); //전송 끝
        i2c_communication(0); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[1]); //전송시작
       Wire.write("#2,+a,2,9@"); 
       Wire.endTransmission(SLAVE[1]); //전송 끝
        i2c_communication(1); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[2]); //전송시작
       Wire.write("#3,+a,2,9@"); 
       Wire.endTransmission(SLAVE[2]); //전송 끝
        i2c_communication(2); //명력도착여부 확인
        delay(1000);

        Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,+a,2,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 확인
       break;
    
    case 44 : 
       Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#10,-b,1,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 
       
      break;
    case 45 : 
        Wire.beginTransmission(SLAVE[9]); //전송시작
       Wire.write("#11,-b,1,9@"); 
       Wire.endTransmission(SLAVE[9]); //전송 끝
        i2c_communication(9); //명력도착여부 
      
      break;
      case 46 : 
       Wire.beginTransmission(SLAVE[3]); //전송시작
       Wire.write("#4,-a,1,9@"); 
       Wire.endTransmission(SLAVE[3]); //전송 끝
        i2c_communication(3); //명력도착여부 
      break;
 case 47 : 
       Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#12,+b,3,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 
      
      break;
      case 48 : 
       Wire.beginTransmission(SLAVE[10]); //전송시작
       Wire.write("#13,-b,3,9@"); 
       Wire.endTransmission(SLAVE[10]); //전송 끝
        i2c_communication(10); //명력도착여부 
      break;
 case 49 : 
       Wire.beginTransmission(SLAVE[4]); //전송시작
       Wire.write("#5,-b,3,9@"); 
       Wire.endTransmission(SLAVE[4]); //전송 끝
        i2c_communication(4); //명력도착여부 
delay(100);
        Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,-b,3,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 
delay(100);
        Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,-b,3,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 
delay(100);
        Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,-b,3,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 
delay(100);
        Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,-b,3,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 

delay(4000);
         Wire.beginTransmission(SLAVE[4]); //전송시작
       Wire.write("#5,-a,3,9@"); 
       Wire.endTransmission(SLAVE[4]); //전송 끝
        i2c_communication(4); //명력도착여부 
delay(2000);
        Wire.beginTransmission(SLAVE[5]); //전송시작
       Wire.write("#6,-a,3,9@"); 
       Wire.endTransmission(SLAVE[5]); //전송 끝
        i2c_communication(5); //명력도착여부 
delay(2000);
        Wire.beginTransmission(SLAVE[6]); //전송시작
       Wire.write("#7,-a,3,9@"); 
       Wire.endTransmission(SLAVE[6]); //전송 끝
        i2c_communication(6); //명력도착여부 
delay(2000);
        Wire.beginTransmission(SLAVE[7]); //전송시작
       Wire.write("#8,-a,3,9@"); 
       Wire.endTransmission(SLAVE[7]); //전송 끝
        i2c_communication(7); //명력도착여부 
delay(2000);
        Wire.beginTransmission(SLAVE[8]); //전송시작
       Wire.write("#9,-a,3,9@"); 
       Wire.endTransmission(SLAVE[8]); //전송 끝
        i2c_communication(8); //명력도착여부 
        delay(2000);
      break;

case 50 : 
       Wire.beginTransmission(SLAVE[13]); //전송시작
       Wire.write("#14,-b,3,9@"); 
       Wire.endTransmission(SLAVE[13]); //전송 끝
        i2c_communication(13); //명력도착여부 

        
      break;
      
default :  break;
   }
    
  }

  


void i2c_communication(int i) {
  // 12 바이트 크기의 데이터 요청
  String o="";
  Wire.requestFrom(i+1, 8); 
  // 12 바이트 모두 출력할 때까지 반복
  for (int j = 0 ; j < 8 ; j++) {  
    // 수신 데이터 읽기
    char c = Wire.read(); 
    // 수신 데이터 출력
    Serial.print(c); 
    o +=c;
  }  
  if(o.length()==8){
   int a=o.indexOf(",");
   if(a!=-1){
   String s=o.substring(a+1,8);
   int yy= s.toInt();
   tlf(yy);
   }}
}
