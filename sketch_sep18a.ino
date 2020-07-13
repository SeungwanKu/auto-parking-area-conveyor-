

void setup() {
     Serial.begin(115200);
    
}
void loop() {
   if(Serial.available()>0){      
      char val = Serial.read();
      if(val=='R'){
        Serial.print("recivedR ");
          analogWrite(5,250); 
analogWrite(6,0);

       }
       else if(val=='G'){
        Serial.print("recivedG ");
                   analogWrite(5,0); 
analogWrite(6,250);

       }
       else if(val=='B'){
        Serial.print("recivedB ");
                     analogWrite(5,0); 
analogWrite(6,0);

       }
   }
}
