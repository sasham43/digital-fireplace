int hallSensorPin = 7;
// int ledPin =  13;
int state = 0;


void setup() {
  // pinMode(ledPin, OUTPUT);
  pinMode(hallSensorPin, INPUT);
  Serial.begin(9600);
  Serial.println("open");
}

void loop(){

  state = digitalRead(hallSensorPin);
  if (state == LOW) {
    // digitalWrite(ledPin, HIGH);
    Serial.println("HIGH");
  }
  else {
    // digitalWrite(ledPin, LOW);
    // Serial.println("LOW");
  }
}
