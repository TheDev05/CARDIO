//USER INPUTS 5 NUMBERS,
//CHECK WHETHER ANY NUMBER IS DIVISIBLE BY 5 OR NOT, AND IF YES THEN WHICH NUMBER?

// #include <stdio.h>
// int main()
// {
//     int i,n;

//     for(i=1;i<=5;i++)
//     {
//         printf("ENTER YOUR NUMBER:\n");
//         scanf("%d",&n);

//         if (n%5==0)
//         {
//         printf("ENTERED NO IS DIV BY 5\n");
//         printf("%d IS THE FIRST INPUTTED NUMBER TO WHICH 5 IS DIVISIBLE\n",n);
//         break;
//         }

//         else

//         {
//             printf("ENTERED NO IS NOT DIVISIBLE BY 5\n");
//             continue;
//         }

//     }

// return 0;
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    int num;

    for (int i = 0; i < 5; i++)
    {
        printf("ENTER YOUR NUMBER: \n");
        scanf("%d", &num);

        if (num % 5 == 0)
        {
            printf("%d IS DIVISIBLE BY 5\n", num);
        }
        else
            printf("%d IS NOT DIVISIBLE BY 5\n", num);
    }
    return (0);
}