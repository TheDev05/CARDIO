//**Add two numbers using pointers

#include <stdio.h>
int add(int *, int *);

int main()
{
    int x, y, sum;

    printf("ENTER X AND Y RESPECTIVELY:\n");
    scanf("%d %d", &x, &y);

    printf("SUM OF %d AND %d IS: %d\n", x, y, add(&x, &y));
    return (0);
}

int add(int *p, int *q)
{
    int r = *p;
    int s = *q;
    return (r + s);
}