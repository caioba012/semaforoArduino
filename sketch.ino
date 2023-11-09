void setup() {
//definição das portas de entrada dos leds
  pinMode(3, OUTPUT); //verde
  pinMode(5, OUTPUT); //amarelo
  pinMode(7, OUTPUT); //vermelho
}

void loop() { 
      digitalWrite(7, HIGH); //pare      
      delay(4000);
      digitalWrite(7, LOW);      

      digitalWrite(3, HIGH); //siga      
      delay(4000);
      digitalWrite(3, LOW);     

      digitalWrite(5, HIGH); //atenção
      delay(1500);
      digitalWrite(5, LOW);      
}
