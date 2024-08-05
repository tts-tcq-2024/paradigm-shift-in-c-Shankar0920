#include <stdio.h>
#include <stdbool.h>
#include "soc_level.h"

int low_soc_breach()
{
  printf("State of Charge out of range!\n");
  return 1;
}

int low_soc_warning()
{
  printf("Warning: nearing discharge\n");
  return 1;
}

int normal()
{
  printf("SOC is normal");
  return 1;
}

int high_soc_warning()
{
  printf("Warning: nearing charge-peak\n");
  return 1;
}

int high_soc_breach()
{
  printf("State of Charge out of range!\n");
  return 0;
}
