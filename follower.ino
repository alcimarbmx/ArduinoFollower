const int L1 = 12, L2 = 11, L3 = 10, L4 = 9;
const int a = 7, b = 6, c = 5, d = 4;
int C1, C2, C3, C4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 9; i < 13; i++){
    pinMode(i, INPUT);
    }
  for(int i = 4; i <= 7; i++){
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
  delay(100);
  if(C1 == HIGH){
  digitalWrite(a, C1);
  digitalWrite(b, C2);
  digitalWrite(c, C3);
  digitalWrite(d, C4);
  }else{
  digitalWrite(a, C1);
  digitalWrite(b, C2);
  digitalWrite(c, C3);
  digitalWrite(d, C4);
    }
  
  }
