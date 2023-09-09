#include<stdio.h>
int main()
{
    float salary, tax;
    printf("insert annual basic salary & i will tell income tax\n");
    scanf("%f", &salary);
    if (salary >= 300000) {
        tax = salary * 30/100;
        printf("the tax on you salary is 30 percent i.e. \n %.2f", tax);
    } 
    else if((salary >= 150000) && (salary <300000)){
        tax = salary * 20/100;
        printf("the tax on you salary is 20 percent i.e. \n %.2f", tax);
    }
    else{
        printf("dont worry you have no income tax");
    }
    return 0;
}