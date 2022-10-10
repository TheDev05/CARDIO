//** Check whether a number is even or odd using functions.

// #include <stdio.h>
// int check(int, int);

// int main()
// {
//     int a, b;

//     printf("ENTER 2 NUMBERS:\n");
//     scanf("%d %d", &a, &b);

//     if (check(a, b) == a)
//     {
//         printf("%d IS EVEN\n", a);
//     }

//     else
//         printf("%d IS EVEN\n", b);
//     return (0);
// }

// int check(int a, int b)
// {
//     if (a % 2 == 0)
//     {
//         return (a);
//     }
//     else
//         return (b);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

int check(int num)
{
    if (num % 2 == 0)
    {
        return (0);
    }
    else
        return (1);
}

int main()
{
    int num;
    printf("ENTER YOUR NUMBERS:\n");
    scanf("%d", &num);

    if (check(num))
    {
        printf("NUMBER IS ODD\n");
    }
    else
        printf("NUMBER IS EVEN\n");

    return (0);
}