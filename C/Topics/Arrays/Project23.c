//Print reverse of an array

// #include <stdio.h>

// int main()
// {
//     int num[20], count;

//     printf("ENTER INPUT LIMIT\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBER:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     for (int i = count - 1; i >= 0; i--)
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
//     int num[20], count;

//     printf("ENTER INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     printf("OUTPUT:\n");

//     for (int i = count - 1; i >= 0; i--)
//     {
//         printf("%d", num[i]);
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

    int num[count];
    printf("ENTER ARRAY ELEMTS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    // for (int i = 0; i < count / 2; i++) //? REVERSING AN ARRAY
    // {
    //     int temp = num[i];
    //     num[i] = num[count - 1 - i];
    //     num[count - 1 - i] = temp;
    // }

    // for (int i = 0; i < count; i++)
    // {
    //     printf("%d ", num[i]);
    // }

    for (int i = count - 1; i >= 0; i--) //? PRINTING ARRAY ELEMTS IN REVERSE ORDER
    {
        printf("%d ", num[i]);
    }

    return (0);
}