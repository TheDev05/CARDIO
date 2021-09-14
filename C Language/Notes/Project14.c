//FINDING SUM OF SQUARE OF NATURAL NUMBERS

// 1. BY THE HELP OF USERS INPUT OF NATURAL NUMBERS

// #include <stdio.h>
// int main()
// {
//     int n,num,i,sum;
//     sum=0;
//     i=0;

//     printf("ENTER HOW MANY NATURAL NUMBER YOU WANT TO SUM UP:\n");
//     scanf("%d", &n);

//     while(i<n)
//     {
//     printf("ENTER YOUR NATURAL NO:\n");
//     scanf("%d",&num);
//     sum+=num*num;
//     i++;
//     }

// printf("THE SUM OF %d NATURAL NUMBERS IS %d", n,sum);
// return 0;
// }

// 2. AUTOMATICALLY SUM UP TO GIVEN NO OF NATURAL NUMBERS

// #include <stdio.h>
// int main()
// {
//     int n,i,sum;
//     sum=0;
//     i=1;

//     printf("ENTER HOW MANY NATURAL NUMBER YOU WANT TO SUM UP:\n");
//     scanf("%d", &n);

//      while(i<=n)
//      {
//      sum=sum+(i*i);
//      i++;
//      }

// printf("THE SUM OF %d NATURAL NUMBERS IS %d", n, sum);
// return 0;
// }
// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    int sum = 0;
    int num;

    printf("ENTER 10 NUMBERS: \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        sum += num * num;
    }

    printf("SUM OF SQUARE OF 10 NATURAL NUMBER IS: %d", sum);
    return (0);
}