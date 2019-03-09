#include <ICEClass.h>
ICEClass ice40;

void setup() {

  ice40.upload(top_bin,sizeof(top_bin)); // Upload BitStream Firmware to FPGA -> see variant.h
  ice40.upload(); // Upload BitStream Firmware to FPGA -> see variant.h
  ice40.initSPI();  // start SPI runtime Link to FPGA
}

void loop() {

  static uint16_t x = 0;
  ice40.sendSPI16(x++);   delay(50);
}
