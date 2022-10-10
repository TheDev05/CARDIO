//FINDING SECOND LARGEST NUMBER:
//? *UPDATED* Look at third code.

//  TODO: IMPORTANT

// #include <stdio.h>
// int main()
// {
//     int num[20], count, key;
//     int flag = 0;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBER:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     for (int i = 1; i < count; i++)
//     {
//         if (num[0] < num[i]) //*CHECKING FOR THE MOST LARGEST
//         {
//             key = i;
//         }

//         else
//         {
//             flag++; //*IF EVERYTIME ELSE COND IS EXCECUTED THIS MEANS THE FIRST OR NUM[0] IS GRETEST
//         }           //*WE ARE COUNTING THIS BY FLAG
//     }

//     if (flag == count - 1) //*IF COUNT-1 IS EQUAL TO FLAG THIS ONLY HAPPENS WHEN EVERYTIME ELSE COND IS EXECUTED
//     {

//         for (int i = 2; i < count; i++) //*HERE WE KNOW FIRST OR NUM[0] IS LARGEST SO WE SKIP THIS THEN CHECK AGAIN FOR LARGEST THIS GIVE SECOND LARGEST
//         {
//             if (num[1] < num[i]) //*NOW WE ARE CHECKING FROM POS 3 AND SO ON WITH POS 2, SKIPPING 1ST POS
//             {
//                 num[1] = num[i];
//             }
//         }
//         printf("THE SECOND LARGEST NUMBER IS : %d\n", num[1]);
//         return (0);
//     }

//     while (key < count) //*IF ELSE IS NOT EXEXUTED EVERYTIME THEN HERE, KEY IS THE LARGST VALUE POS
//     {
//         num[key] = num[key + 1]; //*WE ARE REMOVING THE LARGEST NO WITH THE HELP OF KEY
//         key++;
//     }

//     count--; //*SIZE BECOME SMALL

//     for (int i = 1; i < count; i++) //*SIMPLY CHECKING AGAIN FOR LARGEST BCOZ WE HAVE ALREADY DELETED THE PREVIOUS MOST LARGEST SO THIS IS 2ND LARGEST
//     {
//         if (num[0] < num[i])
//         {
//             num[0] = num[i];
//         }
//     }

//     printf("THE SECOND LARGEST NUMBER IS : %d\n", num[0]);
//     return (0);
// }

//! * ABOVE CODE CANNT GIVE OUTPUT CORRECTLY FOR INPUTS: 1, 5, 4, 3, 2

//**************************************************************************************************************************************
//**REVISION|20.02.2021

// #include <stdio.h>

// int main()
// {
//     int num[20],data[20],j, count;

//     printf("ENTER INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//         data[i]=0; //? IMPORTANTVTO INTAIZALIZE TO 0, WITHOUT IT OUTPUT VARIES.
//     }

//     for (int i = 1; i < count; i++)
//     {
//         if (num[0] < num[i])
//         {
//             num[0] = num[i];
//         }
//     }

//     j = 1;

//     for (int i = 0; i < count; i++)
//     {
//         if (num[i] != num[0])
//         {
//             data[j] = num[i];
//         }
//         j++;
//     }

//     for (int i = 1; i < count; i++)
//     {
//         if (data[0] < data[i])
//         {
//             data[0] = data[i];
//         }
//     }

//     printf("SECOND MAXIMUM: %d", data[0]);

//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

int find_max(int *p, int count, int key)
{
    int max = *(p + 0);
    for (int i = 0; i < count; i++)
    {
        if (max < *(p + i) && *(p + i) != key)
        {
            max = *(p + i);
        }
    }

    return (max);
}

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

    int max1 = find_max(num, count, -1);
    int max2 = find_max(num, count, max1);

    printf("SECOND MAXIMUM ELEMENT: %d", max2);
    return (0);
}