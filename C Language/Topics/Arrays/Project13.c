//Get the largest element in an array
//**********REVISED**********

// #include <stdio.h>
// int main()
// {
//     int num[20], count;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     for (int i = 1; i < count; i++)
//     {
//         if (num[0] < num[i])
//         {
//             num[0] = num[i];
//         }
//     }

//     printf("THE LARGEST NUMBER IS : %d\n", num[0]);

//     return (0);
// }

//**************************************************************************************************************************************
//**REVISION|20.02.2021

// #include <stdio.h>
// int main()
// {
//     int num[20], count;

//     printf("ENTER INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     for (int i = 1; i < count; i++)
//     {
//         if (num[0] < num[i])
//         {
//             num[0] = num[i];
//         }
//     }

//     printf("MAXIMUM: %d\n", num[0]); return (0);
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

    int max = num[0];
    for (int i = 0; i < count; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }

    printf("MAXIMUM: %d", max);
    return (0);
}