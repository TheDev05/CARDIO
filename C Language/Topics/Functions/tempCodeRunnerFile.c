#include <stdio.h>
void find(int, int);

int main()
{
    int ref2, ref1;

    printf("ENTER YOUR INTERVALS OF NUMBERS:\n");
    scanf("%d %d", &ref1, &ref2);

    find(ref1, ref2);

    return (0);
}

void find(int ref1, int ref2)
{
    int rem, res_rem, fact, res_ref1, sum;

    for (int i = ref1; i < ref2; i++)
    {
        sum = 0;
        fact = 1;
        for (int j = 0; ref1 != 0; j++)
        {
            rem = ref1 % 10;

            res_rem = rem;
            res_ref1 = ref1;
            printf("REM: %d\n", rem);
            ref1 = ref1 / 10;

            while (rem != 0)
            {
                fact *= res_rem - rem;
                rem--;
            }

            sum += fact;

            printf("sum:%d\n", sum);
            printf("FACT:%d\n", fact);
        }

        if (sum == res_ref1)
        {
            printf("%d IS STRONG NUMBER\n", res_ref1);
        }
    }
}
