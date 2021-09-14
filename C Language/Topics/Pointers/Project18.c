//**SIMPLE ADDITION OF POINTER AND SOME OTHER MANIPULATIONS ON NUMBERS.
//**PRACTICE:01**

#include <stdio.h>

int main()
{
    int num[20], *p, count;
    p = &num[0];

    printf("ENTER YOUR INPUT LIMIT:\n");
    scanf("%d", &count);

    printf("ENTER YOUR NUMBER:\n");

    for (int i = 0; i < count; i++)
    {
        // scanf("%d",&num[i]);
        scanf("%d", p + i);
    }

    printf("OUTPUT: \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", *(p + i)); //? VS. ONLY (P+i);....*(p+i) is content not only block.
    }

    return (0);
}

//**PRACTICE:02**

#include <stdio.h>
void set(int *, int);
void show(int *, int);

int main()
{
    int num[20], *p, count;
    // *p=&num[0]; this is same of just num..base address.

    printf("ENTER INPUT COUNT:\n");
    scanf("%d", &count);

    set(num, count);
    show(num, count);
    return (0);
}

void set(int *p, int count)
{
    for (int i = 0; i < count; i++)
    {
        scanf("%d", p + i);
    }
}

void show(int *p, int count)
{

    for (int i = 0; i < count; i++)
    {
        printf("%d ", *(p + i));
    }
}