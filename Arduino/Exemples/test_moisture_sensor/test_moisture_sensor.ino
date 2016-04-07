#define MOISTURE_SENSOR_ANALOG_PORT 0

void setup() {
  // Serial Begin so we can see the data from the mosture sensor in our serial input window. 
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  int sensorValue = analogRead(MOISTURE_SENSOR_ANALOG_PORT);
  Serial.println(sensorValue);
  delay(1000);        // delay 1 second between reads
}
