#include<stdio.h>
int sum(int n1, int n2)
{
    return n1 + n2;
}

int subs(int n1, int n2)
{
    return n1 - n2;
}

int mult(int n1, int n2)
{
    return n1 * n2;
}

float division(n1,n2)
{
    if(n2 == 0)
    {
        printf("Error : division by zero");
        return 0;
    }
    else{
    return n1/ n2;
    }
}
int main()
{
    int num1, num2;
    char choice;
    
    printf("enter any 2 numbers :\n");
    scanf("%d%d",&num1, &num2);
    printf("enter your choice from below: \n +, -, *, / ");
    scanf(" %c", &choice);
    
    switch (choice) 
    {
        case '+':
            printf("addition is %d \n",sum(num1,num2));
            break;
        
        case '-':
            printf("substraction is %d \n",subs(num1,num2));
            break;
        
        case '*':
            printf("multiplication is, %d \n", mult(num1,num2));
            break;
           
        case '/':
            printf("the division is, %f\n", division(num1,num2));
            break;
            
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
}