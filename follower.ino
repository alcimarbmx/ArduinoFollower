const int L1 = 12, L2 = 11, L3 = 10, L4 = 9;
int C1, C2, C3, C4;
void setup() {
  // put your setup code here, to run once:
  for (int i = 9; i < 13; i++){
    pinMode(i, INPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  C1 = digitalRead(L1);
  C2 = digitalRead(L2);
  C3 = digitalRead(L3);
  C4 = digitalRead(L4);
  delay(100);

  
}
