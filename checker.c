#include <stdio.h>
#include <assert.h>
int isTemperatureOutOfRange(float temperature) {
  return (temperature < 0 || temperature > 45);
}
int isSocOutOfRange(float soc) {
  return (soc < 20 || soc > 80);
}
int isChargeRateOutOfRange(float chargeRate) {
  return (chargeRate > 0.8);
}
int batteryIsOk(float temperature, float soc, float chargeRate) {
  if (isTemperatureOutOfRange(temperature)) {
    return 0;
  }
  if (isSocOutOfRange(soc)) {
    return 0;
  }
  if (isChargeRateOutOfRange(chargeRate)) {
    return 0;
  }
  return 1;
}
 
int main() {
  float temperature1 = 25, soc1 = 70, chargeRate1 = 0.7;
  float temperature2 = 50, soc2 = 85, chargeRate2 = 0;
  // Check battery is ok for the first set of parameters
  if (!batteryIsOk(temperature1, soc1, chargeRate1)) {
    printf("Battery parameters out of range!\n");
  }
  // Check battery is ok for the second set of parameters
  if (!batteryIsOk(temperature2, soc2, chargeRate2)) {
    printf("Battery parameters out of range!\n");
  }
  // Assertions for automated testing
  assert(batteryIsOk(temperature1, soc1, chargeRate1));
  assert(!batteryIsOk(temperature2, soc2, chargeRate2));
  return 0;
}
