#include <stdio.h>
#include <string.h>
int cout = 0;
int cout0 = 0;
String incomingByte ;
int i = 0;
int j = 0;
char serInString[100];
void readSerialString (char *strArray) {
  int i = 0;
  if (Serial.available() > 0) {
    Serial.print("reading Serial String: "); //optional: for confirmation
    while (Serial.available() > 0) {
      strArray[i] = Serial.read();
      i++;
      Serial.print(strArray[(i - 1)]);      //optional: for confirmation
    }
    Serial.println();                        //optional: for confirmation
  }
}
void setup()
{
  Serial.begin(9600, SERIAL_7E1);
}
void loop()
{
  while ( i < 1)
  {
    Serial.println(":01031194000156");
    delay(100);
//    Serial1.println(":01031194000156");
    //Serial.println(":01050325FF00D3");   //D402Read
    delay(1000);
    i++;
  }
    readSerialString(serInString);
}
//  if (Serial.available()) {
//      incomingByte = Serial.read();
//      Serial.print("Deger:");
//      Serial.println(incomingByte);
