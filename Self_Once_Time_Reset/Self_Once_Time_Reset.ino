#include <EEPROM.h>
#include <avr/wdt.h>
byte _r_addr15;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
_r_addr15 = EEPROM.read(15);
Serial.print("value at addr15 : ");
Serial.println(_r_addr15);
  if(_r_addr15%2==0){
    EEPROM.write(15,_r_addr15+1);
    Serial.println("Start Reset");
    wdt_enable(WDTO_15MS);
    while(1);
    
  }
Serial.print("value at addr15 : ");
Serial.println(_r_addr15);
Serial.println("Working on progress");
wdt_disable();
}

void loop() {
  // put your main code here, to run repeatedly:

}
