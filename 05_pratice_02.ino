#define PIN_LED 7

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, 0);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  int count = 0;
  
  while(1) {
    digitalWrite(PIN_LED, 0);
    delay(100);
    digitalWrite(PIN_LED, 1);
    delay(100);

    count++;

    if (count == 6) {
      while(1);
    }
  
  }
}
