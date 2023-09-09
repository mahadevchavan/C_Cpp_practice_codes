//Accept two numbers and calculate GCD of them.
#include <stdio.h>

int main()
{
    int i, j, n, flag;
    printf("enter the nth number\n");
    scanf("%d", &n);
    
    printf("the prime numbers beteween 1 and %d are\n", n);
    
    for(i = 2; i <= n; ++i){  
        flag = 1;
        for(j = 2; j <= i/2 ; ++j){
            if(i % j == 0){
            flag = 0;  //we are changing the value of flag if the given number 
            break;      //is divisible and we are breaking out of loop for next
            }           // number.
            
        }
        if(flag == 1){
        printf("%d\n",i);
    }
    
    }

    return 0;
}
