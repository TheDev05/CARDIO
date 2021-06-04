//**Find all prime numbers between the given interval using functions.

#include <stdio.h>
void prime(int, int);

int main()
{
    int lim1, lim2;

    printf("ENTER TWO NUMBERS:\n");
    scanf("%d %d", &lim1, &lim2);

    prime(lim1, lim2);
    return (0);
}

void prime(int a, int b)
{
    int size = b - a, key;
    int data[size], m = 0;

    for (int i = a; i <= b; i++)
    {
        data[m] = -1;
        key = 0;
        for (int j = 2; j <= 9; j++)
        {

            if (i % j == 0 && j != i)
            {
                key = -1;
            }
        }
        if (key != -1)
        {
            data[m] = i;
        }
        m++;
    }

    printf("PRIME:\n");
    for (int i = 0; i < size; i++)
    {
        if (data[i] != -1)
        {
            printf("%d ", data[i]);
        }
    }
}