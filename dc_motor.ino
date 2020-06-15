int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed=255;

void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);

  Serial.begin(96000);
}

void loop() {
  digitalWrite(dir1,HIGH);
  digitalWrite(dir2,LOW);
  analogWrite(speedPin,mSpeed);
  delay(2000);
  analogWrite(speedPin,0);
  delay(5000);
}
