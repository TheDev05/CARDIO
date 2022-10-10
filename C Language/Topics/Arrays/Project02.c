//C Program For Remove Duplicates Items In An Array

// #include <stdio.h>
// int main()
// {
//     int arr[20], total, k;

//     printf("ENTER THE TOTAL DIGIT OF YOUR INPUT:\n");
//     scanf("%d", &total);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < total; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < total - 1; i++) //FIRST LOOP IS FOR HOLD A NUMBER
//     {
//         for (int j = i + 1; j < total; j++) //SECOND LOOP IS FOR CHECK ALL BELOW NO WITH THAT HOLDED NUMBER
//         {
//             if (arr[i] == arr[j])

//             {
//                 for (int k = j; k < total; k++)  //USUALLY WHILE LOOP IS BETTER WORKS HERE CHECK Prac03.c
//                 {
//                     arr[k] = arr[k + 1];
//                 }
//                 total--;
//                 j--;
//             }
//         }
//     }

//     printf("YOUR INPUT AFTER REMOVING DUPLICS:\n");
//     for (int i = 0; i < total; i++)
//     {
//         printf("%d", arr[i]);
//     }

//     return (0);
// }
//****************************************************************************************************************************************
//**REVISION|19.02.2021**

// #include <stdio.h>
// int main()
// {
//     int num[20], count;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     for (int i = 0; i < count - 1; i++)
//     {
//         for (int j = i+1; j < count; j++) //!!!!.....j=1 vs j=i+1 leads diffrent results?
//         {
//             if (num[i] == num[j])
//             {
//                 while(j<count)
//                 {
//                 num[j] = num[j + 1];
//                  j++;
//                 }
//                j--;
//                count--;
//             }
//         }
//     }

//     printf("YOUR NUMBER AFTER REMOVAL OF REPETATIVE ELEMENTS IS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d", num[i]);
//     }

//     return (0);
// }

//***********************************************************************************************************************************************
//**RIVISON**

// #include <stdio.h>

// int main()
// {
//     int num[20], count, res_j;

//     printf("ENTER INPUT COUNT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     for (int i = 0; i < count - 1; i++)
//     {
//         for (int j = i + 1; j < count; j++)
//         {
//             if (num[i] == num[j])
//             {
//                 res_j = j;
//                 while (j < count)
//                 {
//                     num[j] = num[j + 1];
//                     j++;
//                 }
//                 count--;
//                 j = res_j - 1;
//             }
//         }
//     }

//     printf("OUTPUT AFTER REMOVAL OF DUPLICS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d ", num[i]);
//     }
//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    int count;
    printf("ENTER INPUIT LIMIT:\n");
    scanf("%d", &count);

    int num[count];
    printf("ENTER ARRAY ELEMTS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }
  
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (num[i] == num[j])
            {
                int res_j = j;
                while (j < count)
                {
                    num[j] = num[j + 1];
                    j++;
                }
                count--;
                j = res_j-1; //? IMPORTANT
            }
        }
    }

    printf("AFTER REMOVING DUPLICS:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", num[i]);
    }

    return (0);
}