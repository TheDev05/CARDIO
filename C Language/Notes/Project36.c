//*******SUM OF SQYARE OF 2 NUMBERS*********

#include <stdio.h>
#include <math.h>
float square(int a, int b);

int main()
{
    int num1, num2;
    float sum;

    printf("ENTER TWO NUMBER:\n");
    scanf("%d %d", &num1, &num2);

    sum = square(num1, num2);
    printf("THE SUM OF SQUARE OF 2 NUMBERS: %f\n", sum);

    return (0);
}

float square(a, b) int a, b;
{
    float sqr1, sqr2, sum;
    sqr1 = a * a;
    sqr2 = b * b;
    sum = sqr1 + sqr2;
    return (sum);
}