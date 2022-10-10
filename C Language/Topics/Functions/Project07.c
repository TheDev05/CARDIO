//**● Print all strong numbers between the given interval using functions.

// #include <stdio.h>
// void find(int, int);

// int main()
// {
//     int ref2, ref1;

//     printf("ENTER YOUR INTERVALS OF NUMBERS:\n");
//     scanf("%d %d", &ref1, &ref2);

//     find(ref1, ref2);

//     return (0);
// }

// void find(int ref1, int ref2)
// {
//     int rem, res_rem, fact, res_ref1, sum;

//     for (int i = ref1; i < ref2; i++)
//     {
//         sum = 0;
//         fact = 1;
//         for (int j = 0; ref1 != 0; j++)
//         {
//             rem = ref1 % 10;

//             res_rem = rem;
//             res_ref1 = ref1;
//             printf("REM: %d\n", rem);
//             ref1 = ref1 / 10;

//             while (rem != 0)
//             {
//                 fact *= res_rem - rem;
//                 rem--;
//             }

//             sum += fact;

//             printf("sum:%d\n", sum);
//             printf("FACT:%d\n", fact);
//         }

//         if (sum == res_ref1)
//         {
//             printf("%d IS STRONG NUMBER\n", res_ref1);
//         }
//     }
// }

// *********************************************************************************************************************************************
// **RIVISON**

// #include <stdio.h>

// int fact(int num)
// {
//     int prod = 1;
//     for (int i = num; num != 1; i--)
//     {
//         prod *= i;
//     }
//     return (prod);
// }

// void find_strong(int a, int b)
// {

//     for (int i = a; i <= b; i++)
//     {
//         int sum = 0;
//         int num = i;

//         for (int j = 0; num != 0; j++)
//         {
//             int rem = num % 10;
//             sum += fact(rem);
//             num = num / 10;
//         }

//         if (sum == i)
//         {
//             printf("%d ", i);
//         }
//     }
// }

// int main()
// {
//     int lim1, lim2;
//     printf("ENTER TWO INTERVALS;\n");
//     scanf("%d %d", &lim1, &lim2);

//     find_strong(lim1, lim2);
//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**
//! *NOT DONE PUT: 1,150
//TODO: IMPORTANT

#include <stdio.h>

int fact(int num)
{

    int prod = 1;
    for (int i = 0; num != 1; i++)
    {
        prod *= num;
        num--;
    }

    return (prod);
}

void find_strong(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        int num = i;
        int sum = 0;

        for (int j = 0; num != 0; j++)
        {
            int rem = num % 10;
            sum += fact(rem);
            num = num / 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int lim1, lim2;
    printf("ENTER TWO INTERVALSD:\n");
    scanf("%d %d", &lim1, &lim2);

    find_strong(lim1, lim2);
    return (0);
}