// Write a program that accepts numbers continuously as long as the number is positive and prints the
// sum of the given numbers.
#include <stdio.h>

int main()
{
    int num, sum;
    printf("enter positive integer\n");
    scanf("%d",&num);
    while(num > 0){
    
        sum += num;
        printf("enter a positive integer\n");
        scanf("%d", &num);
    }
    printf("thes sum is %d",sum);
    return 0;
}
