const int Reed = 0;
const int buzzer = 2;
int val = 0;
void setup() {
  pinMode(Reed, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(Reed);
  if(val == HIGH){
    Serial.println("Door is open");
    alarm();
  }
  else{
     Serial.println("Door is closed");
  }
}
void alarm(){
  for(int e=0;e<5;e++){
    digitalWrite(buzzer, HIGH);
    delay(50);
    digitalWrite(buzzer, LOW);
    delay(50);
    }
  }
