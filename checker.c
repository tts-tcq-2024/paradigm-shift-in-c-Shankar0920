#include <stdio.h>
#include <assert.h>
int batteryIsOk(float temperature, float soc, float chargeRate) {
    int isOk = 1;  // Assume battery is ok by default
    // Check temperature range
    if (temperature < 0 || temperature > 45) {
        printf("Temperature out of range!\n");
        isOk = 0;
    }
    // Check state of charge range
    if (soc < 20 || soc > 80) {
        printf("State of Charge out of range!\n");
        isOk = 0;
    }
    // Check charge rate
    if (chargeRate > 0.8) {
        printf("Charge Rate out of range!\n");
        isOk = 0;
    }
    return isOk;
}
int main() {
    assert(batteryIsOk(25, 70, 0.7));  // Should pass
    assert(!batteryIsOk(50, 85, 0));   // Should fail
}
