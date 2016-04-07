#define PORT 31

boolean toggle = false;

void setup() {
  Serial.begin(9600);
  pinMode(PORT, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  toggle = !toggle;

  int value = toggle ? 1 : 0;
  digitalWrite(PORT, value);

  String test = toggle ? "ON" : "OFF";
  Serial.print("Relay " + test + "\n");
  delay(2000);
}
