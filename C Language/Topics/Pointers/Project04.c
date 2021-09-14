//** Copy one array to another using pointer.

// #include <stdio.h>
// void copy(int *, int *, int);//? function prototype

// int main()
// {
//     int num[20], data[30], count;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER %d NUMBERS:\n", count);
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     copy(num, data, count);//? function call

//     printf("OUTPUT:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d ", data[i]);
//     }
//     return (0);
// }

// void copy(int num[], int data[], int count)//? function
// {
//     for (int i = 0; i < count; i++)
//     {
//         data[i] = num[i];
//     }
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

void read(int *p, int count)
{
    printf("ENTER ARRAY ELEMTS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", (p + i));
    }
}

void write(int *p, int count)
{
    printf("ARRAY SECOND IS: \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", *(p + i));
    }
}

void copy(int *p1, int *p2, int count)
{
    for (int i = 0; i < count; i++)
    {
        *(p2 + i) = *(p1 + i);
    }
}

int main()
{
    int count;
    printf("ENTER INPUT LIMIT:\n");
    scanf("%d", &count);

    int num[count], data[count];

    read(num, count);
    copy(num, data, count);
    write(data, count);

    return (0);
}