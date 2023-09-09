
#include <stdio.h>

int
main ()
{
  float b_sal, pf, da, tax , hra, net_sal;
  printf("give me the basic salary & i will give net salary");
  scanf("%f", &b_sal);
  
  pf = b_sal * 0.02;
  da = b_sal * 0.08;
  hra = b_sal * 0.05;
  tax = b_sal * 0.03;
  
  net_sal = b_sal + hra + da - (tax + pf);
  
  printf("your net salary is %.2f", net_sal);

  return 0;
}
