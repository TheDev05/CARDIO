//**Add two numbers using pointers

// #include <stdio.h>
// int add(int *, int *);

// int main()
// {
//     int x, y, sum;

//     printf("ENTER X AND Y RESPECTIVELY:\n");
//     scanf("%d %d", &x, &y);

//     printf("SUM OF %d AND %d IS: %d\n", x, y, add(&x, &y));
//     return (0);
// }

// int add(int *p, int *q)
// {
//     int r = *p;
//     int s = *q;
//     return (r + s);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

int add(int *p1, int *p2)
{
    return (*p1 + *p2);
}

int main()
{
    int num1, num2;
    printf("ENTER YWO NUMBERS:\n");
    scanf("%d %d", &num1, &num2);

    int sum = add(&num1, &num2);

    printf("%d IS SUM OF %d AND %d", sum, num1, num2);
    return (0);
}