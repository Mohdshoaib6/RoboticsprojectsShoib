void setup() {
 pinMode(2,INPUT);
 pinMode(3,INPUT);
for(int i=4;i<=7;i++) {
  pinMode(i,OUTPUT);
}
}

void loop() {
 int ir1 = digitalRead(2);
 int ir2 = digitalRead(3);

if(ir1==1 && ir2==1) {
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}

if(ir1==0 && ir2==1) {
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
}

if(ir1==1 && ir2==0) {
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

if(ir1==0 && ir2==0) {
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}
}
