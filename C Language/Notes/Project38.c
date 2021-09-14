// *******great common divisor of 4 numbers ************

#include <stdio.h>
int gcd(int p, int q);

int main()
{
    int a, b, c, d, gcd_of_4;

    printf("ENTER FOUR NUMBERS:\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    gcd_of_4 = gcd(gcd(a, b), gcd(c, d));
    printf("GCD OF 4 NUMBERS IS :%d", gcd_of_4);

    return (0);
}

int gcd(p, q) int p, q;
{
    int temp;
    if (p == 0)
    {
        printf("%d IS GCD\n", q);
    }

    if (q == 0)
    {
        printf("%d IS GCD\n", p);
    }

    if (p > q)
    {
        p = q;
        q = p;
    }

    while (q % p != 0)
    {
        temp = q % p;
        q = p;
        p = temp;
    }

    return (p);
}