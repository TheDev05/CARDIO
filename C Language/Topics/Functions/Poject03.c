//** Maximum and minimum between two numbers using functions.

// #include <stdio.h>

// int max(int a, int b)
// {
//     if (a > b)
//     {
//         return (a);
//     }
//     else
//         return (b);
// }

// int min(int a, int b)
// {
//     if (a < b)
//     {
//         return (a);
//     }
//     else
//         return (b);
// }

// int main()
// {
//     int a, b;

//     printf("ENTER TWO NUMBERS:\n");
//     scanf("%d %d", &a, &b);

//     printf("MAXIMUM IS: %d\n", max(a, b));
//     printf("MINIMUM IS: %d\n", min(a, b));
//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

int find_max(int a, int b)
{
    if (a > b)
    {
        return (a);
    }
    else
        return (b);
}

int main()
{
    int num1, num2;
    printf("ENTER FIRTS THEN SECOND NUMBER:\n");
    scanf("%d %d", &num1, &num2);

    printf("MAXIMUM OF TWO IS: %d\nMINIMUM IS %d", find_max(num1, num2), (num1 + num2 - find_max(num1, num2)));
    return (0);
}