//** Cube of any number using the function.

#include <stdio.h>
int cube(int);

int main()
{
    int a;

    printf("ENTER A NUMBER:\n");
    scanf("%d", &a);

    printf("CUBE OF %d IS: %d\n", a, cube(a));
    return (0);
}

int cube(int a)
{
    return (a * a * a);
}