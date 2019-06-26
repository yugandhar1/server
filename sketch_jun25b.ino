#define led D2
#define Switch D3
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(Switch,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  boolean state;
  state=digitalRead(led);   
  digitalWrite(Switch,state);
  delay(500);
}
