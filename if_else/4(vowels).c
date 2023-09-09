#include<stdio.h>
int main()
{
    char str;
    printf("enter only lowecase alphabates: \n");
    scanf("%c", &str);
    
    if(str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
    {
        printf("%c is a vowel ", str);
    }
    else{
        printf("%c is consonent",str);
    }
    
    return 0;
}