//Searching an element in an array.
//? *UPDATED* LOOK AT SECOND CODE, OCCURENCE AND POSITIONS MENTIONED.

// #include <stdio.h>

// int main()
// {
//     int num[20], count, find;
//     int key = 0, flag;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     printf("ENTER THE NUMBER YOU WANT TO SEARCH:\n");
//     scanf("%d", &find);

//     for (int i = 0; i < count; i++)
//     {
//         if (find == num[i])
//         {
//             key++;   //COUNTING TOTAL NO OF OCCURENCE

//             if (key == 1)  //RESERVING FIRST POSITION OF ITS OCCURENCE
//             {
//                 flag = i;
//             }
//         }
//         //   if (key == 1)
//         //     {
//         //         flag = i;
//         //     }
//     }

//     if (key == 1)
//     {
//         printf("%d is at %d position from starting\n", find, flag + 1);
//     }
//     if (key > 1)
//     {
//         printf("%d occurs %d times and the first position of its occurence is %d \n", find, key, flag + 1);
//     }
//     if (key == 0)
//     {
//         printf("NOT FOUND\n");
//     }

//     return (0);
// }

//**************************************************************************************************************************************
//**REVISION|20.02.2021

// #include <stdio.h>

// int main()
// {
//     int num[20], data[20], count, key, findme;
//     key = 0;

//     printf("ENTER INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//         data[i] = 0;
//     }

//     printf("ENTER THE NUMBER YOU WANT TO SEARCH:\n");
//     scanf("%d", &findme);

//     for (int i = 0; i < count; i++)
//     {
//         if (findme == num[i])
//         {
//             data[i] = i + 1;
//             key++;
//         }
//     }

//     printf("OCCURENCE: %d", key);
//     printf("\nPOSITIONS: ");

//     for (int i = 0; i < count; i++)
//     {
//         if (data[i] != 0)
//         {
//             printf(" \n %d", data[i]);
//         }
//     }

//     return (0);
// }
