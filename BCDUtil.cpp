#include <Arduino.h>
#include "BCDUtil.h"

byte bcdToByte(byte d)
{
  return ((d / 16) * 10) + (d & 15);
}

byte byteToBCD(byte d)
{
  return ((int)(d / 10) * 16) + (d % 10);
}
