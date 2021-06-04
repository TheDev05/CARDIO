//Put even and odd elements of an array in two separate arrays.

// #include <stdio.h>
// int main()
// {
//     int num[20], count, even[20], odd[20];

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//         even[i] = 0;
//         odd[i] = 0;
//     }

//     for (int i = 0; i < count; i++)
//     {
//         if ((num[i] % 2) == 0)
//         {
//             even[i] = num[i];
//         }

//         else
//         {
//             odd[i] = num[i];
//         }
//     }

//     printf("OUTPUT_EVEN:\n");
//     for (int i = 0; i < count; i++)
//     {
//         if (even[i] != 0)
//         {
//             printf("%d\n", even[i]);
//         }
//     }

//     printf("OUTPUT_ODD:\n");
//     for (int i = 0; i < count; i++)
//     {
//         if (odd[i] != 0)
//         {
//             printf("%d\n", odd[i]);
//         }
//     }

//     return (0);
// }

//**************************************************************************************************************************************
//**REVISION|20.02.2021

// #include <stdio.h>
// int main()
// {
//     int num[20], even[20], count;

//     printf("ENTER THE INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//         even[i] = 0;
//     }

//     for (int i = 0; i < count; i++)
//     {
//         if (num[i] % 2 == 0)
//         {
//             even[i] = num[i];
//             num[i] = 0;
//         }
//     }

//     printf("ODD: ");
//     for (int i = 0; i < count; i++)
//     {
//         if (num[i] != 0)
//         {
//             printf(" %d", num[i]);
//         }
//     }
//     printf("\nEVEN: ");
//     for (int i = 0; i < count; i++)
//     {
//         if (even[i] != 0)
//         {
//             printf(" %d", even[i]);
//         }
//     }

//     return (0);
// }