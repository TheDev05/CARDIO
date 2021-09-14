//**BUBBLE SORTING MODIFIED**

#include <stdio.h>

void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int bubble_sort(int *p, int count)
{
    int temp;
    for (int i = 0; i < count - 1; i++)
    {
        temp = 0;
        for (int j = 0; j < count - 1 - i; j++)
        {

            if (*(p + j) > *(p + j + 1))
            {
                temp = 1;
                swap((p + j), (p + j + 1));
            }
        }
        if (temp == 0)
        {
            break;
        }
    }
}

int main()
{
    int num[10];
    int count;

    printf("ENTER INPUT LIMIT:\n");
    scanf("%d", &count);

    printf("ENTER YOUR NUMBERS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    bubble_sort(num, count);

    printf("OUTPUT AFTER SORTING:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", num[i]);
    }

    return (0);
}