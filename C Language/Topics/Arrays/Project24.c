//Find the reverse order of elements in an array and put it in same arry in reverse order.

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num[20], count, half, temp, m;
//     float div;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBER:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     div = count / 2;
//     half = (int)floor(div);
//     m = count - 1;

//     for (int i = 0; i < half; i++)
//     {
//         temp = num[i]; //***RESERVING VALUES
//         num[i] = num[m];
//         num[m] = temp; //****ASSIGINNING RESERVED VALUES
//         m--;
//     }

//     printf("OUTPUT\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d\n", num[i]);
//     }
//     return (0);
// }

//**************************************************************************************************************************************
//**REVISION|20.02.2021

// #include <stdio.h>
// int main()
// {
//     int num[20], count, res, j;
//     float index;

//     printf("ENTER INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     index = (int)count / 2;
//     j = count - 1;

//     for (int i = 0; i < index; i++)
//     {
//         res = num[i];
//         num[i] = num[j-i];
//         num[j-i] = res;
        
//     }

//     printf("OUTPUT:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d", num[i]);
//     }
//     return (0);
// }
