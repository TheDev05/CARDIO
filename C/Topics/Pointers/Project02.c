// ** Swap two numbers using pointers

#include <stdio.h>
void swap(int *, int *);

int main()
{
    int a, b;

    printf("ENTER VALUE OF A THEN B:\n");
    scanf("%d %d", &a, &b);

    printf("BEFORE SWAPPING BOTH VALUES A B= %d %d\n", a, b);

    swap(&a, &b);

    printf("AFTER SWAPPING BOTH VALUES A B= %d %d\n", a, b);
    return (0);
}

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}