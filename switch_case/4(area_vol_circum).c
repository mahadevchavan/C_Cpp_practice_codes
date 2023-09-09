#include<stdio.h>
const float pi = 3.14;
float area(float rad)
{
    float area = pi * rad * rad;
    return area;
}

float circum(float rad)
{
    float circum = 2 * pi * rad;
    return circum;
}

float sphe_vol(float rad)
{
    float vol = (4.0/3.0) * (pi * rad * rad * rad);
    return vol;
}

int main()
{
    int choice;
    float rad;
    
    printf("enter the radius of circle:\n");
    scanf("%f",&rad);
    printf("choose an option:\n");
    printf("1: compute the area of circle and print:\n");
    printf("2: compute the circumference of circle and print:\n");
    printf("3: compute the volume of sphere and print:\n");
    scanf("%d",&choice);
    
    switch (choice) 
    {
        case 1:
        printf("area is %.2f ",area(rad));
        break;
        
        case 2:
        printf("circumference is %.2f", circum(rad));
        break;
        
        case 3:
        printf("volume of sphere is %.2f",sphe_vol(rad));
        break;
           
        default:
        printf("invalid choice");
        break;
    }
    return 0;
}
