//**  Swap two arrays using pointers.

#include <stdio.h>
void swap(int num[], int data[], int);//? indicates pointer if brac is used...same of(int*,int*,int)

int main()
{
    int num[20], data[20], count;

    printf("ENTER YOUR INPUT LIMITS:\n");
    scanf("%d", &count);

    printf("ENTER FIRST ARRAY ELEMENTS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("ENTER SECOND ARRAY ELEMENT:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &data[i]);
    }

    swap(num, data, count);

    printf("FIRST ARRAY OUTPUT\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\nSECOND ARRAY OUTPUT:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", data[i]);
    }

    return (0);
}

void swap(int num[], int data[], int count)
{
    int temp;
    for (int i = 0; i < count; i++)
    {
        temp = num[i];
        num[i] = data[i];
        data[i] = temp;
    }
}

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

void read(int *p, int count)
{
    printf("ENTER ARRAY ELEMENS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", (p + i));
    }
}

void copy(int *p1, int *p2, int count)
{
    for (int i = 0; i < count; i++)
    {
        int temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }
}

void write(int *p, int key, int count)
{
    if (key == 1)
        printf("FIRST ARRAY IS:\n");

    if (key == 2)
        printf("\nSECOND ARRAY IS:\n");

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

    int num1[count], num2[count];

    read(num1, count);
    read(num2, count);

    copy(num1, num2, count);

    write(num1, 1, count);
    write(num2, 2, count);

    return (0);
}