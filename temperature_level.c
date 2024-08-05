#include "temperature_level.h"

int low_temp_breach()
{
  printf("Temperature out of range!\n");
  return 1;
}

int low_temp_warning()
{
  printf("Warning: nearing discharge\n");
  return 1;
}

int temp_normal()
{
  printf("Temperature is normal");
  return 1;
}

int high_temp_warning()
{
  printf("Warning: nearing charge-peak\n");
  return 1;
}

int high_temp_breach()
{
  printf("Temperature out of range!\n");
  return 0;
}
