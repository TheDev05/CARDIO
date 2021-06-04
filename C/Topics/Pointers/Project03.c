// ** Input and print array elements using a pointer.

#include <stdio.h>
void input(int p[], int);
void show(int p[], int);

int main()
{
    int num[20];
    int count;

    printf("ENTER INPUT LIMIT:\n");
    scanf("%d", &count);

    input(num, count);
    show(num, count);

    return (0);
}

void input(int p[], int count)
{
    printf("ENTER ARRAY ELEMENTS:\n");

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &p[i]);
    }
}

void show(int p[], int count)
{
    printf("OUTPUT:\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d ", p[i]);
    }
}
