int water; //random variable 
void setup() {
  pinMode(7,OUTPUT); //output pin for relay board, this will sent signal to the relay
  pinMode(4,INPUT); //input pin coming from soil sensor
  digitalWrite(4,HIGH);
}

void loop() { 
  water = digitalRead(7);  // reading the coming signal from the soil sensor
  if(water == HIGH) // if water level is full then cut the relay 
  {
  digitalWrite(6,LOW); // low is to cut the relay
  }
  else
  {
  digitalWrite(6,HIGH); //high to continue proving signal and water supply
  }
  delay(400); 
}                                                                       
