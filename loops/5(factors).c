// Write a program to calculate factors of a given number
#include <stdio.h>

int main()
{
    int number, i;
    printf("enter the number whose factors u want:\n");
    scanf("%d",&number);
    printf("the factors of the number %d are\n", number);
    
    for(i=1; i <= number; i++)
    {
        if(number % i == 0)
        {
            printf("%d\n",i);   
        }
    }

    return 0;
}
