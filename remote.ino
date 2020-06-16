#include <IRremote.h>

int IRpin = 11;
IRrecv IR(IRpin);
decode_results cmd;

int LPin = 12;

int on = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LPin, OUTPUT);
  IR.enableIRIn();
}

void loop() {
  
  while(IR.decode(&cmd) == 0) {
      
  }
  Serial.println(cmd.value);
  delay(500);
  if(cmd.value == 4105841032) {
    if(on == 1) {
    on = 0; 
   } else {
    on = 1;
    }  
  }

  if(on == 1) {
    digitalWrite(LPin, HIGH);  
   } else {
    digitalWrite(LPin, LOW);  
    }
  
  IR.resume();
}
