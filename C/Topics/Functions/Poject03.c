//** Maximum and minimum between two numbers using functions.

#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
    {
        return (a);
    }
    else
        return (b);
}

int min(int a, int b)
{
    if (a < b)
    {
        return (a);
    }
    else
        return (b);
}

int main()
{
    int a, b;

    printf("ENTER TWO NUMBERS:\n");
    scanf("%d %d", &a, &b);

    printf("MAXIMUM IS: %d\n", max(a, b));
    printf("MINIMUM IS: %d\n", min(a, b));
    return (0);
}