0
#include <stdio.h>

int
main ()
{
  float phy, chem, bio, math, mar;
  float total, percent;
  printf ("enter the marks of each subject");
  scanf ("%f%f%f%f%f", &phy, &chem, &bio, &math, &mar);

  total = phy + chem + bio + math + mar;
  percent = (total / 500) * 100;

  printf ("the total is %.2f\n", total);
  printf ("the percentage is %.2f", percent);

  return 0;
}
