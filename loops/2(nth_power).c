// Write a program to accept two integers x and n and compute x raised to n
#include <stdio.h>

int main()
{
    int i, x, power, nth_power=1;
    printf("enter the number and the n th power u want calculate\n");
    scanf("%d%d", &x, &power);
    
    printf("the nth power of %d is ",x);
    
    for(i=1; i<=power; i++)
    {
        nth_power = nth_power * x;
    }
    printf("%d",nth_power);

    return 0;
}
