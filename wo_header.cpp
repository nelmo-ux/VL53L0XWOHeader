#include<Arduino.h>
#include<Wire.h>
uint16_t Dist

void setup() {
  // put your setup code here, to run once:
    Wire.begin();
    Serial.begin(9800);
    initialz();


}

void loop() {
  Serial.print("Distance:");
  Serial.println(Dist);

}

void mesdist(){
  byte val=0;
  int gbuf[12] = {};
  for (size_t count = 0; count < 100; count++) {
    delyta(15);
    Wire.beginTransmission(0x29);
    Wire.write(0x24);
    Wirte.endTransmission();
    Wire.requestFrom(0x29, 1);
    while (wire.available() < 1) {
      delay(1);
    }
    val = Wire.read();
    if (val & 0x01) break;
 }

   Wire.beginTransmission(0x29);
   Wire.write(0x14);
   Wire.endTransmission();
   Wire.requestFrom(0x29, 12);
 for (size_t i = 0; i < 12; i++) {
   while(Wire.available()< 1)delay(1);
   gbuf[i] = Wire.read();
 }
 Dist =  makeint16(gbuf[11], gbuf[10]);

}
void initialz(){
  Wire.beginTransmission(0x29);
    Wire.write(0x00):
    Wire.write(0x01);
  Wire.endTransmission();
}
