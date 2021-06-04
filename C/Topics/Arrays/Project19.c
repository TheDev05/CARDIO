//Count frequency of each element in an array.

// #include <stdio.h>
// int main()
// {
//     int num[20], data[20], count;
//     int key;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBER:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//         data[i] = -1; //?SECURING ELEMEN SO THAT WE CAN COMPARE ITS ALL ELEEMENTS BY USING -1....AS IF(DATA[i]!=-1)
//     }

//     for (int i = 0; i < count; i++)
//     {
//         key = 1; /***IMPORTANT WE HAVE TO ASSIGN KEY WITH 1 EVERYTIME AFTER EXCEUTING 2ND LOOP
//                     IF WE ASSIGNS 1 AT THE STARTING OF PROGRAM THEN IF THIS SECOND FOR LOOP IF EXCECUTED THE KEY VALUE INCREMENTER TO 1
//                     AND ON SECOND EXECUTION ITS VALUE NOW START FROM 2 FOR ANY OTHER ELEMENT THIS LEADS FALSE OUTPUT****/
//         for (int j = i + 1; j < count; j++)
//         {
//             if (num[i] == num[j])
//             {
//                 key++;
//                 data[j] = 0; //?FOR AVOIDING REPETING IN OUTPUT OF SAME NUMBER
//             }
//         }
//         if (data[i] != 0) /*****FILLING OCCURENCE VALUE IF SECOND LOOP MEANS NO VALUE REPEATS
//                                THEN IT AUTO ASSIGNS 1 BCOZ WE PROVIDE KEY TO 1 ANY ELEMENTS OCCURS AT LEAST 1 SO KEY=1 NOT KEY=0
//                                AND NOT EQUAL TO 0 MEANS DONT FILL OCCURENCE TWO TIMES ELEMENTS ASSIGNS 0 ARE REPETED ELEEMETS*/

                            //? (=0) is duplicates item we dont have to consider coz we only consider element once.

//         {
//             data[i] = key;
//         }
//     }

//     printf("OCCURENECE OF EACH NUMBER IS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         if (data[i] != 0)
//         {
//             printf("%d: %d\n", num[i], data[i]);
//         }
//     }

//     return (0);
// }

//**************************************************************************************************************************************
//**REVISION|20.02.2021
//!! *LIMITATIONS: CANNOT USE 0 IN INPUTS.

// #include <stdio.h>
// int main()
// {
//     int num[20], data[20], count, key;

//     printf("ENTER INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//         data[i] = 0;
//     }

//     for (int i = 0; i < count; i++)
//     {
//         key = 1;

//         for (int j = i + 1; j < count; j++)
//         {
//             if (num[i] == num[j])
//             {
//                 key++;
//                 num[j] = 0;
//             }
//             //? *IF WE PUT DATA[i]=KAY AT HERE THE FOR LAST i NO ANY j IS EXECUTED SO LAST NO CANNT BE PRINTED.
//         }
//         data[i] = key; //? *USE HERE.
//     }
//     printf("OUTPUT:\n");

//     for (int i = 0; i < count; i++)
//     {
//         if (num[i] != 0 && data[i] != 0)

//             printf("%d = %d\n", num[i], data[i]);
//     }

//     return (0);
// }