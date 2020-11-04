//elddd
int a = 10;

unsigned long time;
int count = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  time = millis();

  if((time/100) % 1 == 0)
  {
  Serial.print("0.1초마다 반응 : ");
  Serial.println(count++);
  }
    if((time/100) % 20 == 0)
  {
    Serial.println("2초마다 반응 : ");
  }
  
  //Serial.println(time/100);
  delay(100);
}
