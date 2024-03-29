#include "ADS1110.h"
#include <Arduino.h>

const uint8_t DEV_ADDR = 0x48; 

ADS1110 ads_v(0, DEV_ADDR);
ADS1110 ads_i(1, DEV_ADDR);


void ads_v_init()
{
    String testResult;
    ads_v.reset();

    Serial.print(F("\nSearching for Wire... Device "));
    testResult = (ads_v.ping() ? "Not Found\n" : " Found!\n");
    Serial.print(testResult);
}

void ads_i_init()
{
    String testResult;
    ads_i.reset();

    Serial.print(F("\nSearching for Wire1... Device "));
    testResult = (ads_i.ping() ? "Not Found\n" : " Found!\n");
    Serial.print(testResult);
}

int ads_v_loop()
{
    int adc = ads_v.getData();
    // Serial.print(F("\nRaw Data0\t\t "));
    // Serial.print(adc);
    // Serial.print(F("\n"));
    return adc;
}

int ads_i_loop()
{
    int adc = ads_i.getData();

    // Serial.print(F("\nRaw Data1\t\t "));
    // Serial.print(currentData);
    // Serial.print(F("\n"));
    return adc;
}