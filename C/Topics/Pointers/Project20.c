//**RETURNING ADDESS OF REVERSED STRING THEN PRINT IT DIRCTLY USING POINTERS
//**COUNT STRING USING LOOP OUTSIDE MAIN.

#include <stdio.h>
int length(char name[]);
char *reverse(char *, int);

int main()
{
    char name[10];
    int count;

    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", name);

    count = length(name);

    printf("REVERSED STRING IS %s\n", reverse(name, count));

    return (0);
}

int length(char *p)
{
    int count;
    for (count = 0; *(p + count) != '\0'; count++)
        ;

    return (count);
}

char *reverse(char *p, int count)
{
    char temp;
    for (int i = 0; i < count / 2; i++)
    {
        temp = *(p + i);
        *(p + i) = *(p + count - 1 - i);
        *(p + count - 1 - i) = temp;
    }

    printf("%c", *p);
    return (p);
}