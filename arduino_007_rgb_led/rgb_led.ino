int redPin = 2;

int greenPin = 3;

int bluePin = 4;

String input;

String msg = "What color do you want?";

void setup() {
  
  Serial.begin(9600);

  pinMode(redPin,OUTPUT);

  pinMode(greenPin,OUTPUT);

  pinMode(bluePin,OUTPUT);
}

void loop() {

  Serial.println(msg);

  while(Serial.available() == 0){
    
  }

  input = Serial.readString();

  if(input == "red"){

    digitalWrite(redPin,HIGH);

    digitalWrite(greenPin,LOW);

    digitalWrite(bluePin,LOW);
  }

  if(input == "green"){

    digitalWrite(redPin,LOW);

    digitalWrite(greenPin,HIGH);

    digitalWrite(bluePin,LOW);
  }

  if(input == "blue"){

    digitalWrite(redPin,LOW);

    digitalWrite(greenPin,LOW);

    digitalWrite(bluePin,HIGH);
  }
}
