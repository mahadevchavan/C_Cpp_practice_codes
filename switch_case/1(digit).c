#include<stdio.h>
int main()
{
    int digit;
    
    printf("enter a single digit:\n");
    scanf("%d",&digit);
    
    switch (digit) 
    {
        case 0:
            printf("You have entered Zero\n");
            break;
        
        case 1:
            printf("You have entered One\n");
            break;
        
        case 2:
            printf("You have entered Two\n");
            break;
           
        case 3:
            printf("You have entered Three\n");
            break;
            
        case 4:
            printf("You have entered Four\n");
            break;
            
        case 5:
            printf(" You have entered Five\n");
            break;
            
        case 6:
            printf("You have entered Six\n");
            break;
            
        case 7:
            printf(" You have entered Seven\n");
            break;
            
        case 8:
            printf("You have entered Eight\n");
            break;
            
        case 9:
            printf("You have entered Nine\n");
            break;
        
        default:
            printf("Invalid digit\n");
            break;
    }
    return 0;
}
