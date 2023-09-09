//Accept two numbers and calculate GCD of them.
#include <stdio.h>

int main()
{
    int num1, num2, i, gcd;
    printf("enter the two numbers\n");
    scanf("%d%d", &num1, &num2);
    
    for(i=1;i <= num1 && i <= num2; ++i)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    printf("gcd of %d & %d is %d",num1, num2, gcd);

    return 0;
}
