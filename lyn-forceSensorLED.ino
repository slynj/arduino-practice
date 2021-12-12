#define fsrPin A0

int redLEDPin = 13;
int greenLEDPin = 12;
int onPin = 2;
int offPin = 3;

int onStat;
int offStat;
bool ledStat;
int fsrRead;
int ledPin;


void setup() {

  Serial.begin(9600);

  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(onPin, INPUT);
  pinMode(offPin, INPUT);
}


void loop() {
  onStat = digitalRead(onPin);
  offStat = digitalRead(offPin);

  if (onStat == LOW) {
    ledStat = true;

  } else if (offStat == LOW) {
    ledStat = false;
  }

  setPinNum();

  if (ledStat) {
    digitalWrite(greenLEDPin, LOW);
    digitalWrite(redLEDPin, LOW);
    
    digitalWrite(ledPin, HIGH);

  } else {
    digitalWrite(greenLEDPin, LOW);
    digitalWrite(redLEDPin, LOW);
  }
}
void setPinNum() {
  fsrRead = analogRead(fsrPin);
  Serial.println(fsrRead);

  if (fsrRead < 451) {
    ledPin = redLEDPin;
  } else {
    ledPin = greenLEDPin;
  }
}
