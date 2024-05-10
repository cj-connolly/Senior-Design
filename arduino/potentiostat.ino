void average() {
  float mean_voltage = 0;
  float mean_current = 0;
  int steptime = 85;
  int j = 0;
  for(j = 0; j<8; j++) {
    delay(steptime/8);
    float voltage = analogRead(0);
    float current = analogRead(2);
    mean_voltage = (mean_voltage + voltage)/2;
    mean_current = (mean_current + current)/2;
  }
  mean_voltage = (mean_voltage*5/1023)*-1+3.3;
  mean_current = (mean_current*5/1023)-3.3;
  return mean_voltage;
}

void loop() {
  for(int j = 0; j < 1200; j++) {
     potential = 2.5 // voltage, 0V - 5V
     analogWrite(9,potential/5*255); // constant applied voltage 0V-5V, 0-255
     av = average();
     if (av - potential) > 0.25 {
      break; // prevent runaway voltage changes
     }
     delay(250);
  }
  while(1);
}
  
