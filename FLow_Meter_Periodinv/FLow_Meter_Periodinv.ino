void setup() {
  Serial.begin(115200);
  Serial.println("Starting ...");

}

void loop() {

  unsigned long pDuration;
  pDuration = pulseIn(2,HIGH,1000);  

  double pFreq = 1/pDuration;

  double EstFlow = (pFreq/73.0)*(1000/60);
  
  Serial.print("Pulse len(t)= ");
  Serial.print(pDuration);
  Serial.print(" Freq(p/s) = ");
  Serial.print(pFreq);
  Serial.print(" Estimated Flow(ml/s) = ");
  Serial.println(EstFlow);
  
}
