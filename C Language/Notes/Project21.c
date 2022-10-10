//FINDING SUM OF INPUTTED NUMBERS USING ARRAY

// #include <stdio.h>
// int main()
// {
//     int number[5];
//     int sum=0;

//     printf("ENTER YOUR 5 NUMBERS:\n");

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d",&number[i]);
//     }

// for (int i = 0; i < 5; i++)
// {
//     sum+=number[i];
// }
// printf("THE SUM OF INPUTTED NUMBER IS %d\n", sum);
// return 0;
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
    int sum = 0;

    printf("ENTER %d ELEMETS:\n", count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    printf("SUM:%d", sum);

    return (0);
}
