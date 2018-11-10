#include <stdio.h>

int main()
{
  float rad, volume;
  printf("Enter radius: ");
  scanf("%f", &rad);
  volume = 4.0f/3.0f*3.14159*rad*rad*rad;
  printf("%.3f", volume);
  return 0;

}
