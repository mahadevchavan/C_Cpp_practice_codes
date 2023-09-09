
#include <stdio.h>

int main ()
{
  float height, radius, surf_area, volume;
  const float pi = 3.14;
  printf("enter radius and height of cylinder & i shall give surface area and volume of the same \n");
  scanf("%f%f", &radius, &height);

  surf_area = 2 * pi * radius * (radius + height);
  volume = pi * radius * radius * height;

  printf("surf_area and volume of cylinder is %.2f and %.2f", surf_area, volume);

  return 0;
}
 