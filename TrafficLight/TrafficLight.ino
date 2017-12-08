//Cheap traffic lights
/*
 * Using a RGB LED, and red LED and green LED.
 */
int R=7;
int G=5;

void setup() {
  // put your setup code here, to run once:
pinMode(R,OUTPUT);
pinMode(G,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(G,HIGH);
delay(2000);
digitalWrite(R,HIGH);
delay(500);
digitalWrite(G,LOW);
delay(1500);
digitalWrite(R,LOW);
}
