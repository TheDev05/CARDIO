#include <stdio.h>
int main()
{
    int arr[2][2], count;
    int arr1[2][2];
    count = 2;

    printf("ENTER YOUR NUMBER:\n");
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("ENTER YOUR CHARACTER:\n");
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            fflush(stdin);
            scanf("%c", &arr1[i][j]);
        }
    }

    printf("final:\n");
    for (int i = 0; i < count; i++)
    {
        printf("\n");

        for (int j = 0; j < count; j++)
        {

            printf(" %d", arr[i][j]);
        }
        for (int j = 0; j < count; j++)
        {

            printf(" %c", arr1[i][j]);
        }
    }

    return (0);
}