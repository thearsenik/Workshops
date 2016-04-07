int i = 0;

void setup() {
  //Setup Serial Port with baud rate of 115200
  Serial.begin(115200);
  print("Hello World!\n");
}

void loop() {
  print("Hello World! " + String(i) + "\n");
  i++;
}

void print(String s) {
  Serial.print(s);
}
