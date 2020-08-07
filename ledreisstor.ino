
const int ledPin = 13;   
const int resPin = A0; 


void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);  
  pinMode(resPin, INPUT);  
}

void loop() {
//check if resistor is past threshold and change LED status accordingly
  int resStatus = analogRead(resPin);   

   if (resStatus <=300) {

    digitalWrite(ledPin, HIGH);               
    Serial.println("It is currently DARK, LED is ON");
    
   }
  else {

    digitalWrite(ledPin, LOW);          
    Serial.println("It is currently light, LED is off");
  }
}
