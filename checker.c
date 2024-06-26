#include <stdio.h>
#include <assert.h>
int batteryIsOk(float temperature, float soc, float chargeRate) {
  int result = 1;
  switch(1) {
    case 1:(temperature < 0 || temperature > 45);
      printf("Temperature out of range!\n");
      result = 0;
      break;
    case 2:(soc < 20 || soc > 80);
      printf("State of Charge out of range!\n");
      result = 0;
      break;
    case 3:(chargeRate > 0.8);
      printf("Charge Rate out of range!\n");
      result = 0;
      break;
  }
  return result;
}
int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
