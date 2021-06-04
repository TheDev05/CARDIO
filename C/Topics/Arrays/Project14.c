//C Program For Remove Duplicates Items In An Array
//********REVISED********

// #include <stdio.h>
// int main()
// {

//     int num[20], count;

//     printf("ENTER THE INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBER:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     for (int i = 0; i < count - 1; i++)
//     {
//         for (int j = i + 1; j < count; j++)
//         {
//             if (num[i] == num[j])
//             {

//                 while (j < count)
//                 {
//                     num[j] = num[j + 1];
//                     j++;
//                 }
//                 count--;
//                 j--;
//             }
//         }
//     }

//     printf("YOUR NUMBER AFTER REMOVING DUPLICS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d", num[i]);
//     }
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

//     printf("ENTER NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     for (int i = 0; i < count - 1; i++)
//     {
//         for (int j = i + 1; j < count; j++)
//         {
//             if (num[i] == num[j])
//             {
//                 while (j < count)
//                 {
//                     num[j] = num[j + 1];
//                     j++;
//                 }
//                 count--;
//                 j--;
//             }
//         }
//     }

//     printf("OUTPUT AFTER REMOVAL OF DUPLICS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d", num[i]);
//     }
//     return (0);
// }