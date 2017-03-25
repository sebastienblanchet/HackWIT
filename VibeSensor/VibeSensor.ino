/* HackWITus
    sebastien blanchet
    March 25 2017
    https://tkkrlab.nl/wiki/Arduino_KY-002_Vibration_switch_module namne of sernsor
*/

int ledPin = 13;
int ShockVal = 10;
int val;


void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ShockVal, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(ShockVal);
//  Serial.print("The sensor is ");
//  Serial.println(val);
//  
//  if (val == HIGH)
//  {
//    digitalWrite(ledPin, LOW);
//
//  }
//  else
//  {
//    digitalWrite(ledPin, HIGH);
//  }
//  delay(1000);
}
