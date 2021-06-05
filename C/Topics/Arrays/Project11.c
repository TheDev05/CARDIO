//Print all negative elements in an array

// #include <stdio.h>

// int main()
// {
//     int arr[20], count;

//     printf("ENTER THE TOTAL INPUT DIGITS:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("YOUR NUMBER IS:\n");

//     for (int i = 0; i < count; i++)
//     {
//         if (arr[i]<0) //*FIRST TIME I COUNDNT RECALL THIS COND, IDK WHY?
//         {
//             printf("%d ", arr[i]);
//         }
//     }

//     return (0);
// }

//**************************************************************************************************************************************
//**REVISION|19.02.2021

// #include <stdio.h>
// int main()
// {
//     int num[20], data[20], count, key;
//     key = 0;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR INPUT:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//         data[i] = 0;
//     }

//     for (int i = 0; i < count ; i++)
//     {
//         if (num[i] < 0)
//         {
//             data[i] = num[i];
//         }
//     }

//     printf("YOUR NEG NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         if (data[i] != 0)
//         {
//             printf("%d", data[i]);
//             key++;
//         }
//     }

//     if (key == 0)
//     {
//         printf("ALL NUMBERS ARE POS, NO NEG IS FOUND\n");
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

    int key = 0;
    for (int i = 0; i < count; i++)
    {
        if (num[i] < 0)
        {
            key = 1;
            printf("%d ", num[i]);
        }
    }

    if (key == 0)
    {
        printf("NO NEGATIVE ELEMENT OCCURS\n");
    }

    return (0);
}