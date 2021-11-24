int EMGPin = A0;
int EMGVal = 0;

void setup() {
Serial.begin(115200);
pinMode(EMGPin,INPUT);
}

void loop() {
EMGVal = analogRead(EMGPin);
Serial.println(EMGVal);
delay(50);
}
