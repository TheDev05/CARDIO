//**Left rotate an array.
//! NOT COMPLETED

#include <stdio.h>

int main()
{
    int num[20], count, key, temp;

    printf("ENTER ARRAY LIMIT:\n");
    scanf("%d", &count);

    printf("ENTER YOUR ARRAY:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("ROTATION COUNT:\n");
    scanf("%d", &key);

    for (int i = key - 1; i < count; i++)
    {
        int j = 0;
        int index = 0;
        int p = count;

        while (i < count)
        {
            num[j] = num[i];
            j++;
            i++;

            while (index < key - 1)
            {
                num[p - 1 - index] = num[index];
                index++;
            }
        }
    }

    printf("OUTPUT: \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d", num[i]);
    }
    return (0);
}