#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
    int temperatureOutOfRange = (temperature < 0 || temperature > 45);
    int socOutOfRange = (soc < 20 || soc > 80);
    int chargeRateOutOfRange = (chargeRate > 0.8);
    if (temperatureOutOfRange || socOutOfRange || chargeRateOutOfRange) {
       printf("out of range!\n");
        return 0;
    }
    return 1;
}
int main() {
    // Example test cases
    assert(batteryIsOk(25, 70, 0.7));  // Should pass
    assert(!batteryIsOk(50, 85, 0));   // Should fail
}
