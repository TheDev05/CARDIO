//**RETURNING ARRAYS USING STATIC KEYWORD AND POINTERS

#include <stdio.h>
char *setdata();

int main()
{
    char *p;
    p = setdata();

    printf("NAME: %s\n", p);
    return (0);
}

char *setdata()
{
    static char name[20];
    printf("ENTER YOUR NAME: \n");
    scanf("%[^\n]%*c", name);

    return (name);
}