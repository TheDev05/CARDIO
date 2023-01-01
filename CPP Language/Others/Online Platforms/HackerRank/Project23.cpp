/* In this challenge, you will use logical bitwise operators. All data is stored in its binary representation. The logical operators, and C language, use  to represent true and  to represent false. The logical operators compare bits in two numbers and return true or false,  or , for each bit compared.
Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.
Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.

LINK: https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem?h_r=profile */
// TODO: IMPORTANT

#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a = 1, p = 0;
    int and [n * n], or [n * n], xor[n * n];

    for (int i = a; a < n; i++)
    {
        for (int j = a; j <= n; j++)
        {
            if (a < j)
            {
                and[p] = a & j;
                or [p] = a | j;
                xor[p] = a ^ j;
                p++;
            }
        }
        a++;
    }

    int min_and = and[0], min_or = or [0], min_xor = xor[0];
    for (int i = 0; i < p; i++)
    {
        if (min_and > and[i])
        {
            min_and = and[i];
        }

        if (min_or > or [i])
        {
            min_or = or [i];
        }

        if (min_xor > xor[i])
        {
            min_xor = xor[i];
        }
    }

    // printf("*****************************************************\n");
    // for (int i = 0; i < p; i++)
    // {
    //     printf("%d ", or [i]);
    // }

    int key_and = 0, key_or = 0, key_xor = 0;
    for (int i = 0; i < p; i++)
    {
        if (min_and < and[i] && and[i] < k)
        {
            min_and = and[i];
            key_and++;
        }

        if (min_or < or [i] && or [i] < k)
        {
            min_or = or [i];
            key_or++;
        }

        if (min_xor < xor[i] && xor[i] < k)
        {
            min_xor = xor[i];
            key_xor++;
        }
    }

    if (key_and == 0)
    {
        if (min_and < k)
        {
            min_and;
        }
        else
            min_and = 0;
    }

    if (key_or == 0)
    {
        if (min_or < k)
        {
            min_or;
        }
        else
            min_or = 0;
    }

    if (key_xor == 0)
    {
        if (min_xor < k)
        {
            min_xor;
        }
        else
            min_xor = 0;
    }

    printf("%d\n%d\n%d\n", min_and, min_or, min_xor);
}
