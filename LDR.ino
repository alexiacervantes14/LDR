void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float vm, Rl,Il;
  delay(1000);
  vm=analogRead(A0);
  vm=vm*(5.0/1023.0);
  Serial.print("Voltaje recibido:");
  Serial.print(vm);
  Serial.print(" volts");
  Serial.println(" ");
  Rl=613*((5/vm)-1);
  Il=pow((Rl/126951),-1.1655);
  Serial.print("\n");
  Serial.print("Resistencia del LDR: ");
  Serial.print(Rl);
  Serial.print(" ohm");
  Serial.println(" ");
  Serial.print("Intensidad luminosa: ");
  Serial.print(Il);
   Serial.println(" LUX");
  Serial.println("____________________________________");
  if(Il<=3005){
    digitalWrite(13,HIGH);
  }else{
    digitalWrite(13,LOW);
  }
  
}
