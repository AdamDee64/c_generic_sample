
int clamp_int(int value, int min, int max){
   if (value < min) return min;
   if (value > max) return max;
   return value;
}

float clamp_float(float value, float min, float max){
   if (value < min) return min;
   if (value > max) return max;
   return value;
}

unsigned char clamp_u8(unsigned char value, unsigned char min, unsigned char max){
   if (value < min) return min;
   if (value > max) return max;
   return value;
}