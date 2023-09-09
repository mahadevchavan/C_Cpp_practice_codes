#include<stdio.h>
int max(int a, int b, int c)
{   
    int result;

    if(a > b && a > c)
    {
        result = a;
    }
    else if(b > a && b > c)
    {
        result = b;
    }
    else
    {
        result = c;
    }
    
}

int min(int a, int b, int c)
{   
    int result;

    if(a < b && a < c)
    {
        result = a;
    }
    else if(b < a && b < c)
    {
        result = b;
    }
    else
    {
        result = c;
    }
    
}
int main()
{
    int num1, num2, num3;
    printf("enter 3 numbers: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("you have entered %d %d %d \n",num1, num2, num3);
    
    printf("Max is %d \n and Min is %d \n",max(num1, num2, num3),min(num1, num2, num3));
    
    return 0;
}
