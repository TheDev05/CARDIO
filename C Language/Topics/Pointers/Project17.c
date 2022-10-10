//** Return multiple values from a function using pointers.
//**USING POINTERS:

// #include <stdio.h>
// void find(int num[], int, int *, int *);

// int main()
// {
//     int num[20];
//     int count, max, min;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR ARRAY:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     find(num, count, &max, &min);

//     printf("MAXIMUM IS: %d\n", max);
//     printf("MINIMUM IS: %d\n", min);
//     return (0);
// }

// void find(int num[], int count, int *max, int *min)
// {
//     int res;
//     res = num[0];

//     for (int i = 0; i < count; i++)
//     {
//         if (num[0] < num[i])
//         {

//             num[0] = num[i];
//         }
//         *max = num[0];
//     }

//     num[0] = res;

//     for (int i = 0; i < count; i++)
//     {
//         if (num[0] > num[i])
//         {
//             num[0] = num[i];
//         }
//         *min = num[0];
//     }
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

void result(int num1, int num2, int *add, int *sub, int *mun, float *div)
{
    *add = num1 + num2;
    *sub = (num1 > num2) ? (num1 - num2) : (num2 - num1);
    *mun = num1 * num2;
    *div = (num1 > num2) ? ((float)num1 / num2) : ((float)num2 / num1);
}

int main()
{
    int num1, num2;
    printf("ENTER TWO NUMBERS:\n");
    scanf("%d %d", &num1, &num2);

    int add, sub, mun;
    float div;

    result(num1, num2, &add, &sub, &mun, &div);

    printf("ADDITION: %d\nSUBTRACTION: %d\nMUNTIPLICATION: %d\nDIVISON: %.1f\n", add, sub, mun, div);

    return (0);
}