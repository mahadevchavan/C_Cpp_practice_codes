
#include <stdio.h>

int main ()
{
  int num1, num2, temp;
  printf ("enter 2 numbers");
  scanf ("%d %d", &num1, &num2);

  temp = num1;
  num1 = num2;
  num2 = temp;

  printf ("num1 and num2 after swapping are %d and %d", num1, num2);

  return 0;
}
