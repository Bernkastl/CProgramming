#include <stdio.h>

#define PI 3.1415926
#define RADIUS 10

int main(void)
{
  
  float volume = 4.0f/3.0f * PI * RADIUS * RADIUS * RADIUS;

  printf("The volume of the sphere with radius %d m is %.3f m^3", RADIUS, volume);

  return 0;
}
