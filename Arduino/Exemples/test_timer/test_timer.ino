#define ONE_MINUTE_DELAY (1*60*1000)

// 01/03/2016 06:52
#define CURRENT_DATE 1456812800

void setup() {
  Serial.begin(9600);
}

long currentDate = CURRENT_DATE;
// the loop routine runs over and over again forever:
void loop() {
  delay(ONE_MINUTE_DELAY);
  currentDate += (ONE_MINUTE_DELAY/1000);
  Serial.print("timestamp " + String(currentDate) + "\n");
}
