//Write a menu driven program to do following operations :
//a) Compute area of circle
//b) Compute area of rectangle
//c) Compute area of triangle
//d) Exit
//Display menu, ask choice to the user, depending on choice accept the parameters and perform the
//operation. Continue this process until user selects exit option.
#include <stdio.h>
float tri(float b, float h)
{  
    float area = 0.5 * (b * h);
    return area;
}

float sqre( float side)
{
    float area = side * side;
    return area;
}

float cir(float rad)
{   
    float pi = 3.14;
    float area = pi * rad * rad;
    return area;
}
int main()
{
    float rad, base, height, sq_side;
    int choice = 0;
    
    
    while(choice != 4)
    {
        printf("enter the choice:\n");
        printf("1: Compute area of circle\n");
        printf("2: Compute area of rectangle\n");
        printf("3: Compute area of triangle\n");
        printf("4: exit\n");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
                printf("enter the radius of circle\n");
                scanf("%f", &rad);
                printf("the area circle is %.2f \n",cir(rad));
                break;
                
            case 2:
                printf("enter the side of rectangle\n");
                scanf("%f", &sq_side);
                printf("the area of square is %.2f \n",sqre(sq_side));
                break;
                
            case 3:
                printf("enter the base and height of triangle\n");
                scanf("%f%f", &base, &height);
                printf("the area triangle is %.2f \n",tri(base, height));
                break;
            
            default:
            printf("you choose to exit:");
                break;
            
        }
        
    }
    

    return 0;
}
