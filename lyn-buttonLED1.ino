int ledPin = 13;
int onButt = 2;
int offButt = 3;
int onStat;
int offStat;
bool ledStat;


void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(onButt, INPUT);
  pinMode(offButt, INPUT);
}


void loop() {
  onStat = digitalRead(onButt);
  offStat = digitalRead(offButt);

  if (onStat == LOW) {
    ledStat = true;
    
  } else if (offStat == LOW) {
    ledStat = false;
  }
  
 digitalWrite(ledPin, ledStat);   

  }

}
