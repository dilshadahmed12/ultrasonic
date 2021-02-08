/*
* Ultrasonic sensor tester
*/
const int trigPin = 9;
const int echoPin = 10;

float duration, distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, 0);
  delayMicroseconds(4);
  digitalWrite(trigPin, 1);
  delayMicroseconds(12);
  digitalWrite(trigPin, 0);

  duration = pulseIn(echoPin, 1);
  distance = (duration*.0343)/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100);
}
