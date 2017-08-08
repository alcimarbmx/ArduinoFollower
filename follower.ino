const int L1 = 12, L2 = 11, L3 = 10, L4 = 9;
const int a = 7, b = 6, c = 5;
int C1, C2, C3, C4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 9; i < 13; i++){
    pinMode(i, INPUT);
    }
  for(int i = 5; i <= 7; i++){
    pinMode(i, OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  C1 = digitalRead(L1);
  C2 = digitalRead(L2);
  C3 = digitalRead(L3);
  C4 = digitalRead(L4);
  Serial.println(C1);
  Serial.println(C2);
  Serial.println(C3);
  Serial.println(C4);
  boolean f = (C2 && C3);
  boolean e = (C1 && C2);
  boolean d = (C3 && C4);
  delay(100);
  if(f && !e && !d){
    //frente 
    Serial.print("Frente");
    Serial.println(f); 
    digitalWrite(a, f);
  }else if(e && !f && !d){
    //esquerda
    Serial.print("Esquerda");
    Serial.println(e);
    digitalWrite(b, e);  
  }else if(d && !f && !e){
    //diereita
    Serial.print("Direita");
    Serial.println(d);
    digitalWrite(c, d);
  }else{
    //parar
    Serial.println("Parado");
    digitalWrite(a, 0);
    digitalWrite(b, 0);
    digitalWrite(c, 0);
  }
            
  }
