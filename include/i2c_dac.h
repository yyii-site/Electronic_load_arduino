#ifndef __I2C_DAC_h
#define __I2C_DAC_h


void dac_init();
void dac_loop();
void set_dac(uint16_t val);

#endif