//Merge two arrays to the third array.

// #include <stdio.h>

// int main()
// {
//     int arr1[20], arr2[20], arr3[50], count1, count2, count3;
//     int i, m;

//     printf("ENTER INPUT LIMIT FIRST ARRAY OF INTEGERS:\n");
//     scanf("%d", &count1);

//     printf("ENTER INPUT LIMIT OF SECOND ARRAY OF INTEGERS:\n");
//     scanf("%d", &count2);

//     printf("ENTER FIRST ARRAY ELEMENTS:\n");
//     for (int i = 0; i < count1; i++)
//     {
//         scanf("%d", &arr1[i]);
//     }

//     printf("ENTER SECOND ARRAY ELEMENTS:\n");
//     for (int i = 0; i < count2; i++)
//     {
//         scanf("%d", &arr2[i]);
//     }

//     for (int i = 0; i < count1; i++)
//     {
//         arr3[i] = arr1[i];
//     }

//     m = count1;

//     for (int j = 0; j < count2; j++)
//     {
//         arr3[m] = arr2[j];
//         m++;
//     }

//     printf("OUTPUT:\n");
//     for (int i = 0; i < m; i++)
//     {
//         printf("%d ", arr3[i]);
//     }

//     return (0);
// }

//**************************************************************************************************************************************
//**REVISION|20.02.2021

// #include <stdio.h>
// int main()
// {
//     int num1[20], num2[20], num3[50], count1, count2, count3;
//     int index;

//     printf("ENTER FIRST INPUT LIMITS:\n");
//     scanf("%d", &count1);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count1; i++)
//     {
//         scanf("%d", &num1[i]);
//     }

//     printf("ENTER SECOND INPUT LIMITS:\n");
//     scanf("%d", &count2);

//     printf("ENTER YOUR SECOND NUMBERS:\n");
//     for (int i = 0; i < count2; i++)
//     {
//         scanf("%d", &num2[i]);
//     }

//     count3 = count1 + count2;

//     for (int i = 0; i < count1; i++)
//     {
//         num3[i] = num1[i];
//     }

//     index = count1;

//     for (int i = 0; i < count2; i++)
//     {
//         num3[index] = num2[i];
//         index++;
//     }

//     printf("OUTPUT:\n");
//     for (int i = 0; i < count3; i++)
//     {
//         printf("%d", num3[i]);
//     }

//     return (0);
// }