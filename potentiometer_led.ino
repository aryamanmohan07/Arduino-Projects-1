int greenPin=11;
int yellowPin=10;
int redPin=6;
int bluePin=3;
int readVal;
int readPin=A2;
float V2;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(readVal,INPUT);
pinMode(greenPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
pinMode(redPin,OUTPUT);
pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(readPin);
  V2=(5./1023.)*readVal;
  Serial.println(V2);
  if(V2<2.0){
    digitalWrite(bluePin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,LOW);
  }
  if (V2>2.0 && V2<3.0){
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,LOW);
  }
  if (V2>3.0 && V2<4.0){
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(yellowPin,HIGH);
    digitalWrite(redPin,LOW);
  }
  if (V2>4.0){
    digitalWrite(bluePin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin,HIGH);
  }

  delay(10);

}

