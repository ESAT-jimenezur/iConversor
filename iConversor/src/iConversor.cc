#include <stdio.h>
#include <math.h>
#include "../include/iConversor.h"



void iconversor_computing::BinaryToDecimal(unsigned char *number, unsigned int nbits){
  float finalvalue = 0;
  float powerval = 0;
  for (unsigned int j = 0; j <= nbits; ++j) {
    //we have to reverse the power so the ordering is MSB first
    powerval = powf(2.0f, (nbits - j));
    //test for a "1", otherwise it must be a zero
    if (number[j] == '1')
      finalvalue += powerval;
  }
  return (int)finalvalue;
}
  