//** Return multiple values from a function using pointers.
//**USING POINTERS:

#include <stdio.h>
void find(int num[], int, int *, int *);

int main()
{
    int num[20];
    int count, max, min;

    printf("ENTER YOUR INPUT LIMIT:\n");
    scanf("%d", &count);

    printf("ENTER YOUR ARRAY:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    find(num, count, &max, &min);

    printf("MAXIMUM IS: %d\n", max);
    printf("MINIMUM IS: %d\n", min);
    return (0);
}

void find(int num[], int count, int *max, int *min)
{
    int res;
    res = num[0];

    for (int i = 0; i < count; i++)
    {
        if (num[0] < num[i])
        {

            num[0] = num[i];
        }
        *max = num[0];
    }

    num[0] = res;

    for (int i = 0; i < count; i++)
    {
        if (num[0] > num[i])
        {
            num[0] = num[i];
        }
        *min = num[0];
    }
}