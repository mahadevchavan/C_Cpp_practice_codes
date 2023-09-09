
#include <stdio.h>

int main()
{
    float area, circum, rad, pi = 3.14;
    printf("give me the radius of circle and i will give you area and  of it\n");
    scanf("%f", &rad);
    area = pi * rad * rad;
    circum = 2 * pi * rad;
    printf("the area is %f and circumference is %f", area, circum);
    return 0;
}