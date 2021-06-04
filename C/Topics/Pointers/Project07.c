//** Search an element in an array using pointers.

#include <stdio.h>
int find(int num[], int, int); //? indicates pointer if brac is used...same of(int*,int,int)

int main()
{
    int num[20];
    int count, key, index;
    index = -1;

    printf("ENTER YOUR INPUT LIMIT:\n");
    scanf("%d", &count);

    printf("ENTER %d NUMBERS:\n", count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("ENTER THE NUMBER YOU WANNA FIND:\n");
    scanf("%d", &key);

    index = find(num, key, count);

    if (index != -1)
    {
        printf("%d FOUND AT POSITION %d\n", key, index);
    }
    else
        printf("NOT FOUND\n");

    return (0);
}

int find(int num[], int key, int count)
{
    int temp = -1;
    for (int i = 0; i < count; i++)
    {
        if (num[i] == key)
        {
            temp = i;
            break;
        }
    }
    return (temp);
}