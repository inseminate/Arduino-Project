int readPin = A5;

void setup() {

  pinMode(readPin,INPUT);

  Serial.begin(9600);
}

void loop() {

  Serial.println((5.0/1023.0)*analogRead(readPin));

  delay(500);
}
