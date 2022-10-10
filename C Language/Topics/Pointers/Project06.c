//** Reverse an array using pointers.

// #include <stdio.h>
// void reverse(int num[], int);//? indicates pointer if brac is used...same of(int*,int)

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

//     reverse(num, count);

//     printf("OUTPUT AFTER REVERSING:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d ", num[i]);
//     }

//     return (0);
// }

// void reverse(int num[], int count)
// {
//     int temp;
//     for (int i = 0; i < count / 2; i++)
//     {
//         temp = num[i];
//         num[i] = num[(count - 1) - i];
//         num[(count - 1) - i] = temp;
//     }
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

void read(int *p, int count)
{
    printf("ENTER ARRAY ELMETS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", (p + i));
    }
}

void reverse(int *p, int count)
{
    for (int i = 0; i < count / 2; i++)
    {
        int temp = *(p + (count - 1) - i);
        *(p + (count - 1) - i) = *(p + i);
        *(p + i) = temp;
    }
}

void write(int *p, int count)
{
    printf("REVERSE ARRY IS: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", *(p + i));
    }
}

int main()
{
    int count;
    printf("ENTER INPUT LIMIT:\n");
    scanf("%d", &count);

    int num[count];

    read(num, count);
    reverse(num, count);
    write(num, count);

    return (0);
}