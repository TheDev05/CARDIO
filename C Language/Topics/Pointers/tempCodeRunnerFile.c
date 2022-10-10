#include <stdio.h>
void copy(int *, int *, int);//? function prototype

int main()
{
    int num[20], data[30], count;

    printf("ENTER YOUR INPUT LIMIT:\n");
    scanf("%d", &count);

    printf("ENTER %d NUMBERS:\n", count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    copy(num, data, count);//? function call

    printf("OUTPUT:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", data[i]);
    }
    return (0);
}

void copy(int num[], int data[], int count)//? function
{
    for (int i = 0; i < count; i++)
    {
        data[i] = num[i];
    }
}
