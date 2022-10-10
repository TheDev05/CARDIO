//C Program For Remove Duplicates Items In An Array
//***********REVISED**********

// #include <stdio.h>

// int main()
// {
//     int array[20], count;

//     printf("ENTER YOUR INPUT COUNT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &array[i]);
//     }

//     for (int i = 0; i < count - 1; i++)
//     {
//         for (int j = i + 1; j < count; j++)
//         {
//             if (array[i] == array[j])
//             {
//                 while (j < count)
//                 {
//                     array[j] = array[j + 1];
//                     j++;
//                 }
//                 count--;
//                 j--;
//             }
//         }
//     }

//     printf("YOUR NUMBER AFTER DELETING DUPLICS IS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d", array[i]);
//     }

//     return (0);
// }

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
                res_j = j - 1;
            }
        }
    }

    printf("REQUIRED ARRAY:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", num[i]);
    }

    return (0);
}