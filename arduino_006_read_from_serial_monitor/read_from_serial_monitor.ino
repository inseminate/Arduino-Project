int writePin = 9;

int blinkNumbers;

String msg = "How many blinks do you want: ";

void setup() {

  pinMode(writePin,OUTPUT);

  Serial.begin(9600);
}

void loop() {

  Serial.println(msg);

  while(Serial.available() == 0){
    
  }

  blinkNumbers = Serial.parseInt();
  
  for(int i = 0 ; i < blinkNumbers ; i = i + 1){
    
    digitalWrite(writePin,HIGH);

    delay(1000);

    digitalWrite(writePin,LOW);

    delay(1000);
  }
}
