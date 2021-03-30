#define ldr A0
void setup() {

Serial.begin(9600);
pinMode(ldr, INPUT);
}

void loop() {
 int ldr_stat = analogRead(ldr);
 Serial.println("Nilai  :");
 Serial.println(ldr_stat);
 delay(10000);
}
