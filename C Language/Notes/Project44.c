//**INSERTION SORTING**

// #include <stdio.h>
// void insertion_sort(int *, int);

// int main()
// {
//     int num[20], count;

//     printf("ENTER INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER ARRAY ELEMENTS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     insertion_sort(num, count);

//     printf("AFTER SORTING:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d ", num[i]);
//     }

//     return (0);
// }

// void insertion_sort(int *p, int count)
// {
//     int temp;
//     for (int i = 1; i < count; i++)
//     {

//         int j = i - 1;

//         temp = *(p + i);

//         while (*(p + j) > temp && j >= 0)
//         {
//             *(p + j + 1) = *(p + j);
//             j--;//* last iteration is at j which is not greater than temp
//         }
//         *(p + j + 1) = temp;
//     }
// }

//********************************************************************************************************************************************
//** RIVISON

#include <stdio.h>
void insertion_sort(int *, int);

int main()
{
    int num[20], count;

    printf("ENTER INPUT LIMIT: \n");
    scanf("%d", &count);

    printf("ENTER YOUR NUMBER:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    insertion_sort(num, count);

    printf("OUTPUT: \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d", num[i]);
    }

    return (0);
}

void insertion_sort(int *p, int count)
{
    for (int i = 1; i < count ; i++)
    {
        int temp = *(p + i);
        int j = i - 1;

        while (*(p + j) > temp && j >= 0)
        {
            *(p + j + 1) = *(p + j);
            j--;
        }

        *(p + j + 1) = temp;
    }
}