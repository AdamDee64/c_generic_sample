#include <stdio.h>
#include "clamp.h" // see clamp.h for further notes

int main() {

   // initialize some numbers of different types to test
   int test_i = -9000;
   float test_f = 56.80;
   unsigned char test_u8 = 199;

   // here we clamp each number with a generic clamp() function call. 
   printf("clamping int %d ... result: %d\n", test_i, clamp(test_i, -1000, 1000));
   printf("clamping float %.2f ... result: %.2f\n", test_f, clamp(test_f, 0, 50));
   printf("clamping byte %hhu ... result: %hhu\n", test_u8, clamp(test_u8, 0, 250)); 

   return 0;
}