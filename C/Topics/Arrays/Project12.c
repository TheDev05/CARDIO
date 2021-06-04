//Get the largest element in an array.

// #include <stdio.h>

// int main()
// {
//     int num[20], count;

//     printf("ENTER THE INPUT SIZE:\n");
//     scanf("%d", &count);

// again:
//     printf("ENTER YOUR NUMBER:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     printf("THE LARGEST NUMBER IS:\n");

//     for (int i = 1; i < count; i++)
//     {
//         if (num[0] < num[i]) //*HOLDING FIRST VALUE I.E 1 THEN CHECK WHOLE INPUT REFRANCE TO THIS HOLDED NUMBER
//         {                    //*AS IN 1 TO 100 THE LARGEST IS ONE WHICH IS ALSO LARGEST TO 1 THE FIRST NUMBER I.E 100>1

//             num[0] = num[i];
//         }
//     }

//     printf("%d\n", num[0]);
//     goto again;

//     return (0);
// }

//**************************************************************************************************************************************
//**REVISION|19.02.2021

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

//     for (int i = 0; i < count - 1; i++)
//     {
//         for (int j = i + 1; j < count; j++)
//         {
//             if (num[0] < num[j])
//             {
//                 num[0] = num[j];
//             }
//         }
//     }
//     printf("LARGEST NUMBER IS: %d\n", num[0]);
//     return (0);
// }