//CHECKING INPUT NUMBER IS PRIME OR NOT

// #include <stdio.h>
// int main()
// {
//     int i,n;

//     printf("ENTER YOUR NUMBER:\n");
//     scanf("%d",&n);

//     for(i=2;i<n;i++)
//    {
//         if(n%i==0)
//         {
//             printf("%d is not a prime number\n",n);
//             return 0;
//         }

//         else
//         continue;

//     }
// printf("%d is a prime number\n",n);
// return 0;
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    int num;
    printf("ENTER YOUR NUMBER:\n");
    scanf("%d", &num);

    for (int i = 2; i < 9; i++)
    {
        if (num % i == 0 && num != i)
        {
            printf("%d IS NOT A PRIME NUMBER\n", num);
            return (0);
        }
    }

    printf("%d IS A PRIME NUMBER\n", num);
    return (0);
}