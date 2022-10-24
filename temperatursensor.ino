void setup() {
  Serial.begin(9600);
 
}

void loop() {

  int val  = analogRead(A0);
  // Calcul spécial pour TMP36
  float tension = val * 5.0;
  tension/= 1024.0;
  float temp_celcius = ((tension * 1000) - 500) / 10;

  Serial.println(temp_celcius);
  delay(200);
}
