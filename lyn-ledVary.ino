int ledPins[] = {2,3,4,5,6,7,8,9,10,11,12};
int ledNum = sizeof(ledPins)/2;

void setup() {
  
  Serial.begin(9600);
  
  for(int i = 0; i < ledNum; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  
}

void loop() {
  
  inOut();

}

void inOut() {
  int delayTime = 200;

  for(int i = 0; i < ledNum; i++){
    int LED1 = i;
    int LED2 = ledNum - 1 - LED1;
    
    if(LED1 == LED2){LED2 = i;}
      
    digitalWrite(ledPins[LED1], HIGH);
    digitalWrite(ledPins[LED2], HIGH);
    delay(delayTime);
  }

  float mid = ledNum/2;
  int round = floor(mid);

  if (round*2 == ledNum - 1){
    digitalWrite(ledPins[round], LOW);
    delay(delayTime);
  }
  
  for(int i = round - 1; i >= 0; i--){
    int LED1 = i;
    int LED2 = ledNum - 1 - LED1;
  
    digitalWrite(ledPins[LED1], LOW);
    digitalWrite(ledPins[LED2], LOW);
    delay(delayTime);
    
  }

}
