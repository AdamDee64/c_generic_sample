#ifndef _CLAMP_H
#define _CLAMP_H

// first prototype and write the function for each supported type. functions are defined in clamp.c
int clamp_int(int value, int min, int max);
float clamp_float(float value, float min, float max);
unsigned char clamp_u8(unsigned char value, unsigned char min, unsigned char max);

// _Generic will determine a value's type, in this case we want to test the number to be clamped.
// it works like a switch statement. in the case of int: do this, if float : do this, etc. 
// you can even provide a default case.
#define clamp(value, min, max)   \
   _Generic( (value),            \
      int : clamp_int,           \
      float : clamp_float,       \
      unsigned char : clamp_u8,  \
      default: clamp_float       \
   )(value, min, max)

// what we did essentially is prototype a function that doesnt actually exist, it simply
// redirects the values passed to the appropriate real function based on the type given to it.

#endif