#include <Wire.h>
#include <Adafruit_MCP4725.h>

Adafruit_MCP4725 dac;

void dac_init()
{
  dac.begin(0x60, &Wire);
}

void dac_loop()
{
  static uint16_t counter;
  counter += 100;
  if (counter > 4095)
  {
    counter = 0;
  }
  dac.setVoltage(counter, false);
}

void set_dac(uint16_t val)
{
  if (val > 4095)
    val = 4095;
  dac.setVoltage(val, false);
}