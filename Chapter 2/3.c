#include <stdio.h>

#define PI 3.1415926

int main(void)
{

  float radius;
  printf("Enter the radius of the sphere: ");
  scanf("%f", &radius);
  
  float volume = 4.0f/3.0f * PI * radius * radius * radius;

  printf("The volume of the sphere with radius %.3f m is %.3f m^3", radius, volume);

  return 0;
}
