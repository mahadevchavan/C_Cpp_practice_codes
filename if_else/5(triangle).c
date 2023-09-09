#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the angles of triangle\n");
    scanf("%d%d%d", &a,&b,&c);
    
    if(a+b+c == 180)
    {
        printf("Its a valid triangle");
    }
    else{
        printf("its not valid triangle");
    }
    
    return 0;
}