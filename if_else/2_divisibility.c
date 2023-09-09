#include<stdio.h>
int main()
{
    int num;
    printf("insert number\n");
    scanf("%d", &num);
    if ((num % 5 == 0) && ( num % 7 == 0)) {
        printf("the number %d is divisible by 5 & 7\n", num);
    } 
    else{
        printf("the number %d is not divisible by 5 & 7\n", num);
    }
    return 0;
}