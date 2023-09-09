#include <stdio.h>

int main()
{
    int num1, num2, choice, num, quotient, reminder;
    printf("enter 2 numbers:\n");
    scanf("%d%d", &num1, &num2);
    printf("enter choice from below:\n");
    printf("1: equality check :\n");
    printf("2: check if num1 < num2:\n");
    printf("3: display quotient and reminder:\n");
    printf("4: enter a number and check if it lies in num1 & num2 :\n");
    printf("5: swap the numbers :\n");
    scanf("%d", &choice);
    
    switch (choice)
    {
        case 1:
            if(num1 == num2)
            {
                printf("%d and %d are equal", num1, num2);
            }
            else
            {
                printf("both numbers are not equal");
            }
            break;
            
        case 2:
           if(num1 < num2)
            {
                printf("%d is smaller than %d",num1, num2);
            }
            else
            {
                printf("%d is not smaller than  %d ", num1, num2);
            }
            break;
        
        case 3:
            quotient = num1 / num2;
            
            reminder = num1 % num2;
            printf("quotient is %d and reminder is %d",quotient, reminder);
            break;
        
        case 4:
            printf("plz enter the numeber to check if it lies in these 2 no's\n");
            scanf("%d", &num);
            if ((num >= num1) && (num <= num2))
            {
                printf("%d lies within the %d and %d",num, num1, num2);
            }
            else
            {
                printf("%d is out of the range",num);
            }
            break;
            
        case 5:
            printf("we'll swap the numbers for you:\n");
            num1 = num1 + num2;
            num2 = num1 - num2;
            num1 = num1 - num2;
            printf("number after swapping are %d and %d", num1, num2);
            break;
           
        default:
        printf("invalid choice");
        break;
    }
    

    return 0;
}
