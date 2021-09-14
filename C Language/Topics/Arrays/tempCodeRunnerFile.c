#include <stdio.h>

int main()
{
    int num[20], data[20], count, key, findme;
    key = 0;

    printf("ENTER INPUT LIMIT:\n");
    scanf("%d", &count);

    printf("ENTER YOUR NUMBERS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
        data[i] = 0;
    }

    printf("ENTER THE NUMBER YOU WANT TO SEARCH:\n");
    scanf("%d", &findme);

    for (int i = 0; i < count; i++)
    {
        if (findme == num[i])
        {
            data[i] = i + 1;
            key++;
        }
    }

    printf("OCCURENCE: %d", key);
    printf("\nPOSITIONS: ");

    for (int i = 0; i < count; i++)
    {
        if (data[i] != 0)
        {
            printf(" \n %d", data[i]);
        }
    }

    return (0);
}