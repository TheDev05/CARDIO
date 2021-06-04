//Copy all elements from an array to another array

#include <stdio.h>

int main()
{
    int num[20], data[20], count;

    printf("ENTER YOUR INPUT LIMIT:\n");
    scanf("%d", &count);

    printf("ENTER YOUR NUMBERS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < count; i++)
    {
        data[i] = num[i];
    }

    printf("YOUR INPUT IS:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d", data[i]);
    }
    return (0);
}