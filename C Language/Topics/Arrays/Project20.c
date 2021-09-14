//Print all unique elements in the array
//? *UPDATED: LOOK AT SECOND CODE

// #include <stdio.h>
// int main()
// {
//     int num[20], data[20], count;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBER:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//         data[i] = -1;
//     }

//     for (int i = 0; i < count; i++)
//     {

//         for (int j = i + 1; j < count; j++)
//         {
//             if (num[i] == num[j]) //?DONT USE COND NOTEQUAL TO WITH ASSIGNING VALUE TO ANY VARIABLES BCOZ THINK OF 1 1 2 2 5 WHEN IT CHECK 1 TO LAST I.E 5 IT CONSIDER NOT EQUAL TO
//                                   //? IT SET IT TO NOT EQUAL TO AND EXECUTES...
//             {

//                 data[i] = 0;
//                 data[j] = 0;
//             }
//         }
//         // if (key == count - 1) //! dont use this cond this is not true only for 1st element this is true, or second onwards repeat only count-1,count-2 times so key cannt be equally to count
//         //                       //!count-1 is not equal to every elements only for 1st elem,count also reduces
//         // {
//         //     data[i] = num[i];
//         // }

//         if (data[i] != 0)
//         {
//             data[i] = num[i];
//         }
//     }

//     printf("OUTPUT:\n");
//     for (int i = 0; i < count; i++)
//     {
//         if (data[i] != 0)
//         {
//             printf("%d\n", data[i]);
//         }
//     }
//     return (0);
// }
//! *ABOVE CODE HAS LIMITATION WE CANNOT USE 0 IN INPUTS...ALSO CANNT WITH INPUTS.

//**************************************************************************************************************************************
//** REVISION|20.02.2021
//** BEST IN EVERY EXPECT

// #include <stdio.h>
// int main()
// {
//     int num[20], count, key, m;

//     printf("ENTER INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");

//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     printf("OUTPUT: ");

//     for (int i = 0; i < count; i++)
//     {
//         key = 0;
//         for (int j = i + 1; j < count; j++)
//         {

//             if (num[i] == num[j]) //? *DIFFRENT CONCEPT USED IMPORTEANT
//             {

//                 m = num[i]; //? *RESERVING VALUE SO THAN WE CAN PROVIDE A IF CONDITION TO STOP REPETITION OF DUPLICS
//                 key++;
//             }
//         }

//         if (key == 0 && num[i] != m) //? *KEY=0 MEANS IT DOESNOT HAVE DUPLICS.
//         {
//             printf("%d", num[i]);
//         }
//     }

//     return (0);
// }

// //**************************************************************************************************************************************
// //**REVISION|20.02.2021
//! NOTE: FALSE FOR 1,2,1,3,2,1
//! THIS CODE IS OKAY IF CONSERCUTIVE REPEATING TERM ARE THERE AS 1,2,2,3,4 BUT NOT WAORK FOR 1,2,1,3,2..NON-CONSECUTIVE

// #include <stdio.h>
// int main()
// {
//     int num[20], count, key, flag;

//     printf("ENTER INPUT LIMITS:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     for (int i = 0; i < count; i++)
//     {
//         key = 0;
//         for (int j = i + 1; j < count; j++)
//         {
//             if (num[i] == num[j])
//             {
//                 key++;
//                 flag = num[i];
//             }
//         }

//         if (key == 0 && flag != num[i]) //LETS ASSUME INPUT 1,1,2,3,4 WE DONT WANT OUTPUT AS 1 ONLY 2,3,4..(NUBER WHICH SATISFY 1ST 'IF' IS 2 TIME)
//         {
//             printf("%d", num[i]);
//         }
//     }

//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**
//! GOOD

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

    for (int i = 0; i < count; i++)
    {
        int key = 0;
        for (int j = 0; j < count; j++)//? J=0 BCOZ CHECK FROM FIRST ELEMENBST EXCEPT THE CURRENTLY i VALUE
        {
            if (num[i] == num[j] && j != i)
            {
                key++;
            }
        }
        if (key == 0)
        {
            printf("%d ", num[i]);
        }
    }

    return (0);
}