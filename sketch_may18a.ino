const char signalOn = 'S';
void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(115200);    
}

void loop() {
  
  
  while(Serial.available()>0)
  {
    digitalWrite(13, LOW);
    int datafromUser=Serial.read();
    if(datafromUser == signalOn){
      digitalWrite(13, HIGH);
      delay(500);
    }
  }
}
