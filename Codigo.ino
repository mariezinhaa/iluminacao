int pinoLDR = A0;

int pinoLED1 = 9;
int pinoLED2 = 10;
int pinoLED3 = 11;
int pinoLED4 = 12;

int limiteLuz = 300;

void setup(){
 
  pinMode(pinoLED1, OUTPUT);
  pinMode(pinoLED2, OUTPUT);
  pinMode(pinoLED3, OUTPUT);
  pinMode(pinoLED4, OUTPUT);
 
  Serial.begin(9600);
 
}

void loop(){
 
  int valorLuz = analogRead(pinoLDR);
 
  Serial.print("Valor da luz: ");
  Serial.print(valorLuz);
 
  if (valorLuz < limiteLuz){
   
    digitalWrite(pinoLED1, HIGH);
    digitalWrite(pinoLED2, HIGH);
    digitalWrite(pinoLED3, HIGH);
    digitalWrite(pinoLED4, HIGH);
   
  } else{
   
    digitalWrite(pinoLED1, LOW);
    digitalWrite(pinoLED2, LOW);
    digitalWrite(pinoLED3, LOW);
    digitalWrite(pinoLED4, LOW);
   
  }
 
  delay(100);
}