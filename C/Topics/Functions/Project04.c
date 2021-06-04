//** Check whether a number is even or odd using functions.

#include <stdio.h>
int check(int, int);

int main()
{
    int a, b;

    printf("ENTER 2 NUMBERS:\n");
    scanf("%d %d", &a, &b);

    if (check(a, b) == a)
    {
        printf("%d IS EVEN\n", a);
    }

    else
        printf("%d IS EVEN\n", b);
    return (0);
}

int check(int a, int b)
{
    if (a % 2 == 0)
    {
        return (a);
    }
    else
        return (b);
}