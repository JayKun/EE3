#define triggerIn 20
#define echoIn 19
#define ledIn 18

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(triggerIn, OUTPUT);
  pinMode(echoIn, INPUT); 
  pinMode(ledIn, OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration, distance; 
  digitalWrite(triggerIn, LOW);
  delay(500); 
  digitalWrite(triggerIn, HIGH);
  delayMicroseconds(20); 
  digitalWrite(triggerIn, LOW);
  duration = pulseIn(echoIn, HIGH);
  distance = (duration/2)/29.1; 
   Serial.println(distance);
   if(distance < 90 && distance != 0)
   {
    digitalWrite(ledIn, HIGH);
    delay(200); 
    digitalWrite(ledIn, LOW);
    }
    delay(500);
}
