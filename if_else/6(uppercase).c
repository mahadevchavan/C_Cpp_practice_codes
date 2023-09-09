#include<stdio.h>
int main()
{
    char ch;
    printf("enter any type of alphabate: \n");
    scanf("%c", &ch);
    
    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lower case alphabate ", ch);
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("%c is upper case alphabate",ch);
    }
    else{
        printf(" %c is an invalid alphabate",ch);
    }
    
    return 0;
}