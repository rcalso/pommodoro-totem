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
  delay(5000);
  relaxTime();
  delay(5000);
}

void dontDisturb(){
  Serial.print("Don't disturb me!!! I'm busy");
  digitalWrite(LED_RED, 1);
  digitalWrite(LED_GREEN, 0);
}
void relaxTime(){
  Serial.print("Relax Time!! ");
  digitalWrite(LED_RED, 0);
  digitalWrite(LED_GREEN, 1);
}


