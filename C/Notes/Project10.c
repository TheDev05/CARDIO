//FOR LOOP PRACTICE
//SUM OF 5 NOs USER ENTRY

#include <stdio.h>
int main()
{
    int num, sum, count;
    sum = 0;
    count = 5;

    printf("ENTER 5 NUMBERS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    printf("THE SUM IS: %d\n", sum);
    return (0);
}