int val;
int ledpin=13;
void setup(){
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
}

void loop(){
  val=Serial.read();
  if(val=='R') {
    digitalWrite(ledpin,HIGH);
    delay(5000);
    digitalWrite(ledpin,LOW);
    delay(5000);
    Serial.println("Hello World!");
  }
}
