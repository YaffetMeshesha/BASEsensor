int sensorPin = A0;   
int ledPin = 13;     
int ledPin2 = 12;
int sensorValue = 0;  

void setup() {
  pinMode(ledPin, OUTPUT); 
  pinMode(ledPin2, OUTPUT);  
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);    
  float distance = sensorValue*(80/1023.0);
  if(distance <= 30 && distance >= 15){
    digitalWrite(ledPin, HIGH);  
    delay(500);
    digitalWrite(ledPin, LOW);   
    delay(500); 
  }
  else{
    digitalWrite(ledPin2, HIGH);  
    delay(500);
    digitalWrite(ledPin2, LOW);   
    delay(500); 
  } 
}
