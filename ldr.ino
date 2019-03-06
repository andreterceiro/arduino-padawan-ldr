void setup() {
  // put your setup code here, to run once:
  pinMode(A1, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(A1));  
  delay(1000);
}
