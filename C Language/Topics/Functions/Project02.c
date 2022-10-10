//**● Find diameter, circumference and area of a circle using functions

#include <stdio.h>

float dia(float r)
{
    return (r + r);
}

float circum(float r)
{
    return (2 * 3.14 * r);
}

float area(float r)
{
    return (3.14 * r * r);
}

int main()
{
    float r;
    printf("ENTER RADIUS OF CIRCLE:\n");
    scanf("%f", &r);

    printf("AREA OF CIRCLE:%.2f\n", area(r));
    printf("CIRCUMFERENCE OF CIRCLE IS:%.2f\n", circum(r));
    printf("DIAMETER OF CIRCLE IS:%.2f\n", dia(r));
    return (0);
}