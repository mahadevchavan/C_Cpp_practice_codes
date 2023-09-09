#include<stdio.h>
int main()
{
    char ch;
    printf("enter any type of alphabate: \n");
    scanf("%c", &ch);
    printf("you have entered %c \n",ch);
    
    if(ch >= 'a' && ch <= 'z')
    {
        ch -= 32;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        ch +=32;
    }
    printf("the inverted case of given charater is %c", ch);
    
    return 0;
}