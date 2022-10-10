//PRACTICE for DO WHILE
//SUM OF USER ENTRY TILL HIS/HER INPUT BELONGS TO 0.

// #include <stdio.h>
// int main()
// {
//     int sum,number;
//     sum=0;

//     do
//     {

//         printf("ENTER YOUR number:\n");
//         scanf("%d", &number);
//         sum=sum+number;

//     }

//     while (number!=0);

// printf("THE SUM OF YOUR NUMBER IS %d", sum);

// return 0;
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    int sum = 0;
    int num;

    do
    {
        printf("ENTER YOUR NUMBER:\n");
        scanf("%d", &num);

        sum = sum + num;
    } while (num != 0);

        printf("SUM: %d", sum);

    return (0);
}