
#include <stdio.h>

int main ()
{
  float far_temp, celsius, cel_temp;
  printf("enter temp in fahrenheit & i shall give in celcius and celvin\n");
  scanf("%f", &far_temp);

  celsius = (far_temp - 32) * 5/9;
  cel_temp = celsius + 273.15;

  printf("temp in celcius and celvin after is %.2f and %.2f", celsius, cel_temp);

  return 0;
}
 