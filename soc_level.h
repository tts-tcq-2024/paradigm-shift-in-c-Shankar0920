#ifndef SOC_LEVEL_H
#define SOC_LEVEL_H

int low_soc_breach();
int low_soc_warning();
int normal();
int high_soc_warning();
int high_soc_breach();
int batteryIsOk(float temperature, float soc, float chargeRate);

#endif
