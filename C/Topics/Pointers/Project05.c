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