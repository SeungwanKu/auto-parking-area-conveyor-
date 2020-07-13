int A = 1000; // A는 1000부터 2000까지 반복 
void setup() {
  Serial.begin(115200); // 시리얼 통신 시작
} 
void loop() { 
  A+=1;    Serial.print("Q"); 
  Serial.print("1234"); 
  Serial.print(A); 
  Serial.println();  // new line  
if(A==2000)  {
A = 1000;
}
} 


