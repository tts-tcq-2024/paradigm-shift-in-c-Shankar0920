int batteryIsOk(float temperature, float soc, float chargeRate) {
    int temperatureOutOfRange = (temperature < 0 || temperature > 45);
    int socOutOfRange = (soc < 20 || soc > 80);
    int chargeRateOutOfRange = (chargeRate > 0.8);
    if (temperatureOutOfRange || socOutOfRange || chargeRateOutOfRange) {
        if (temperatureOutOfRange) {
            printf("Temperature out of range!\n");
        }
        if (socOutOfRange) {
            printf("State of Charge out of range!\n");
        }
        if (chargeRateOutOfRange) {
            printf("Charge Rate out of range!\n");
        }
        return 0;
    }
    return 1;
}
