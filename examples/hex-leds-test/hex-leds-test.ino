#include <ICEClass.h>
ICEClass ice40;
uint16_t hexmapFont[16] = { 0xF99F,0xF22F,0xF42F,0xF17F,0x1F99,0x7F8F,0xF9F8,0x111F,
                            0x7DBE,0x1F9F,0x9F9F,0xADAC,0xF88F,0xE99E,0xF8EF,0x8E8F };
                            
void setup() { // put your setup code here, to run once:
  ice40.upload(); // Upload BitStream Firmware to FPGA -> see variant.h
  delay(100);
  ice40.initSPI();  // start SPI runtime Link to FPGA
}

void loop() {  // put your main code here, to run repeatedly:
  for(int i = 0 ; i < 16 ; i++){
      ice40.sendSPI16(hexmapFont[i] );  
      delay(800);
  }
}
