//**  Sort array elements in ascending or descending order.

#include <stdio.h>
void insertion_sort(int *, int);

int main()
{
    int num[20], count;

    printf("ENTER ARRAY INPUT LIMIT:\n");
    scanf("%d", &count);

    printf("ENTER ARRAY ELEMENST:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    insertion_sort(num, count);

    printf("\nASSENDING ORDER SORTING:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\nDESCENDING ORDER SORTING:\n");
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }

    return (0);
}

void insertion_sort(int *p, int count)
{
    int temp;
    for (int i = 1; i < count; i++)
    {
        temp = *(p + i);
        int j = i - 1;

        while (*(p + j) > temp && j >= 0)
        {
            *(p + j + 1) = *(p + j);
            j--;
        }
        *(p + j + 1) = temp;
    }
}