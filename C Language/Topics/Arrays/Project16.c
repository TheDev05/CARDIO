//**code1. Count only the total number of even and odd elements in an array.
//**code2. also split all even and odd and print sepretly.

// #include <stdio.h>

// int main()
// {
//     int num[20], count, even, odd;
//     even = 0;
//     odd = 0;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBER:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     for (int i = 0; i < count; i++)
//     {
//         if ((num[i] % 2 == 0) && (num[i] != 1))
//         {
//             even++;
//         }
//         else
//         {
//             odd++;
//         }
//     }
//     printf("even:%d and odd: %d", even, odd);
//     return (0);
// }

//**************************************************************************************************************************************
//**REVISION|20.02.2021

// #include <stdio.h>
// int main()
// {
//     int num[20], data[20], count;

//     printf("ENTER INPUT LIMITS:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//         data[i] = 0;
//     }

//     for (int i = 0; i < count; i++)
//     {
//         if (num[i] % 2 == 0)
//         {
//             data[i] = num[i];
//             num[i] = 0;
//         }

//     }

//     printf("EVEN: ");
//     for (int i = 0; i < count; i++)
//     {
//         if (data[i] != 0)
//         {
//             printf(" %d", data[i]);
//         }
//     }

//     printf("\nODD: ");
//     for (int i = 0; i < count; i++)
//     {
//         if (num[i] != 0)
//         {
//             printf(" %d", num[i]);
//         }
//     }

//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    int count;
    printf("ENTER INPUT LIMIT:\n");
    scanf("%d", &count);

    int num[count];
    printf("ENTER ARRAY ELEMTS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("EVEN ELEMETS:\n");
    for (int i = 0; i < count; i++)
    {
        if (num[i] % 2 == 0)
        {
            printf("%d ", num[i]);
        }
    }

    printf("\nODD ELEMTS:\n");
    for (int i = 0; i < count; i++)
    {
        if (num[i] % 2 != 0)
        {
            printf("%d ", num[i]);
        }
    }
    return (0);
}