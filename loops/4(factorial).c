// Write a program to calculate factorial of a number.
// For e.g. factorial of 5 = 5! = 5 *4*3*2*1 = 120
#include <stdio.h>

int main()
{
    int i, factorial = 1, num;
    printf("enter the number for factorial calculations\n");
    scanf("%d", &num);
    if(num == 0){
        printf("factorial is %d", factorial);
    }
    else
    {
        while(num >= 1)
        {
            factorial = factorial * num;
            num -= 1;
        }
        
        
        printf("factorial is %d", factorial);
    }
    

    return 0;
}
