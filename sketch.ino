void setup() {
//definição das portas de entrada dos leds
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);  
  pinMode(6, OUTPUT);  
}

void loop() { 
      digitalWrite(6, HIGH); //pare      
      delay(4000);
      digitalWrite(6, LOW);      

      digitalWrite(2, HIGH); //siga      
      delay(4000);
      digitalWrite(2, LOW);     

      digitalWrite(4, HIGH); //atenção
      delay(1500);
      digitalWrite(4, LOW);      
}
