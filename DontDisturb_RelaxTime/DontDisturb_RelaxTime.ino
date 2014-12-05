const unsigned int LED_GREEN = 10;
const unsigned int LED_RED = 11;
const unsigned int BAUD_RATE = 9600;

void setup() {
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  randomSeed(analogRead(A0));
  Serial.begin(BAUD_RATE);
}

void loop() {
  dontDisturb();
  delay(5000); // wait for 5 seconds
  relaxTime();
  delay(5000); // wait for 5 seconds
}

void dontDisturb(){
  Serial.print("Don't disturb me!!! I'm busy");
  digitalWrite(LED_RED, HIGH);
  digitalWrite(LED_GREEN, LOW);
}
void relaxTime(){
  Serial.print("Relax Time!! ");
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_GREEN, HIGH);
}


