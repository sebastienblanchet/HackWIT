/*Sebastien Blanchet
   HackWITUS
   March 25 2017
*/

//define analog in pins x,y,z as 0,1,2
const int xpin = 0;
const int ypin = 1;
const int zpin = 2;

//setup loop
void setup()
{
  // serial com init
  Serial.begin(9600);
}


void loop()
{
  //define analog inputs for x,y,z
  int x = analogRead(xpin);
  int y = analogRead(ypin);
  int z = analogRead(zpin);

  float zero_G = 512.0;
  //ADC is 0~1023  the zero g output equal to Vs/2
  //ADXL335 power supply by Vs 3.3V
  float scale = 102.3;
  //ADXL335330 Sensitivity is 330mv/g
  //330 * 1024/3.3/1000

  /*
    Serial.print(x);
    Serial.print("\t");
    Serial.print(y);
    Serial.print("\t");
    Serial.print(z);
    Serial.print("\n");
  */

  Serial.print(((float)x - 331.5) / 65 * 9.8);
  // \t is a tab
  Serial.print("\t");
  Serial.print(((float)y - 329.5) / 68.5 * 9.8);
  Serial.print("\t");
  Serial.print(((float)z - 340) / 68 * 9.8);
  // \n is endl
  Serial.print("\n");
  //time delay for stable measurements

  delay(500);
}
