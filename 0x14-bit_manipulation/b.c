#include <stdio.h>
#include "main.h"

unsigned int binary_to_uint(const char *b) {
  unsigned int num = 0;
  if (b == NULL) {
    return 0; // Return 0 if the string is NULL
  }
  int i = 0;
  while (b[i] != '\0') {
    if (b[i] == '0') {
      num = num << 1; // Shift left by 1 bit
    } else if (b[i] == '1') {
      num = (num << 1) | 1; // Shift left by 1 bit and set the least significant bit to 1
    } else {
      return 0; // Return 0 if there is a char in the string that is not 0 or 1
    }
    i++;
  }
  return num;
}
