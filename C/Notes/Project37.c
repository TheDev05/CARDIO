//*********GREAT COMMON DIVISOR OR HCF*********

#include <stdio.h>
int main()
{
    int a, b, temp;

    printf("ENTER FIRST NUMBER THEN SECOND:\n");
    scanf("%d %d", &a, &b);

    if (a == 0)
    {
        printf("%d is GCD", b);
    }

    if (b == 0)
    {
        printf("%d is GCD", a);
    }

    if (a > b)
    {
        a = b;
        b = a;
    }

    while (b % a != 0)
    {
        temp = b % a;
        b = a;
        a = temp;
    }

    printf("THE GCD IS %d", a);

    return (0);
}