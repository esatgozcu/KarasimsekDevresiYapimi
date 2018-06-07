int beklemeSuresi = 50;

void setup() {
  
  for(int i = 6; i<14;i++){
    
    pinMode(i,OUTPUT);
  }
}
void loop() {
  
  for(int i = 6; i<14;i++){
    
    digitalWrite(i,HIGH);
    delay(beklemeSuresi);
    digitalWrite(i,LOW);
    delay(beklemeSuresi);
  }
  
  //Ters tarafa
  
  for(int i = 12; i>6;i--){
    
    digitalWrite(i,HIGH);
    delay(beklemeSuresi);
    digitalWrite(i,LOW);
    delay(beklemeSuresi);
  }
}
