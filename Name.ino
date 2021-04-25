void setup() 
{  
  Serial.begin(12500);
  delay(1000);
  Serial.println("ESP32 Touch Test");
}

void loop() 
{  
  Serial.println(touchRead(T0));
  delay(1000);
}
