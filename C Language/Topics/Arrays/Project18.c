//Copy all elements from an array to another array

// #include <stdio.h>

// int main()
// {
//     int num[20], data[20], count;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     for (int i = 0; i < count; i++)
//     {
//         data[i] = num[i];
//     }

//     printf("YOUR INPUT IS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d", data[i]);
//     }
//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    int count;
    printf("ENTER INPUT LIMIT:\n");
    scanf("%d", &count);

    int num1[count], num2[count];
    printf("ENTER FIRST ARRAY ELEMTS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num1[i]);
    }

    printf("ENTER SECOND ARRAY  ELEMTS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num2[i]);
    }

    for (int i = 0; i < count; i++)
    {
        int temp = num1[i];
        num1[i] = num2[i];
        num2[i] = temp;
    }

    printf("REQUIRED FIRST ARRAY NOW CONTAIN SECOND ARRAY ELENTS:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", num2[i]);
    }

    return (0);
}