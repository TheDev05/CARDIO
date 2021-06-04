//Count the total number of duplicate elements in an array.

// #include <stdio.h>

// int main()
// {
//     int num[20], count;
//     int key = 0;

//     printf("ENTER YOUR INPUT COUNT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBER:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     for (int i = 0; i < count; i++)
//     {
//         // key=0; //?WE ARE FINIDING GLOBALLY DUPLICS IN WHOLE ARRAY SO ASSIGNS AT BEGINNING OF PROGRAM,
//                   //?HERE WE ASSIGN WHEN QUE IS: IND DUPLICS OF EVERY ELEMENT THEN.

//         for (int j = i + 1; j < count; j++)
//         {
//             if (num[i] == num[j])
//             {
//                 key++;
//             }
//         }
//     }
//     printf("TOTAL DUPLICATES IN YOUR ENTRY: %d\n", key);

//         return (0);
// }

//**************************************************************************************************************************************
//**REVISION|20.02.2021

// #include <stdio.h>
// int main()
// {
//     int num[20], count, key;
//     key = 0;

//     printf("ENTER INPUT LIMITS:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
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
//                 key++;
//             }
//         }
//     }

//     printf("TOTAL DUPLICATES: %d", key);

//     return (0);
// }