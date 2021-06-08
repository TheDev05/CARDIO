//**RETURNING ADDESS OF REVERSED STRING THEN PRINT IT DIRCTLY USING POINTERS
//**COUNT STRING USING LOOP OUTSIDE MAIN.

// #include <stdio.h>
// int length(char name[]);
// char *reverse(char *, int);

// int main()
// {
//     char name[10];
//     int count;

//     printf("ENTER YOUR STRING:\n");
//     scanf("%[^\n]%*c", name);

//     count = length(name);

//     printf("REVERSED STRING IS %s\n", reverse(name, count));

//     return (0);
// }

// int length(char *p)
// {
//     int count;
//     for (count = 0; *(p + count) != '\0'; count++)
//         ;

//     return (count);
// }

// char *reverse(char *p, int count)
// {
//     char temp;
//     for (int i = 0; i < count / 2; i++)
//     {
//         temp = *(p + i);
//         *(p + i) = *(p + count - 1 - i);
//         *(p + count - 1 - i) = temp;
//     }

//     printf("%c", *p);
//     return (p);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

int len(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
        ;

    return (i);
}

char *reverse(char *p)
{
    int count = len(p);

    for (int i = 0; i < count / 2; i++)
    {
        char temp = *(p + i);
        *(p + i) = *(p + count - 1 - i);
        *(p + count - 1 - i) = temp;
    }

    return (p);
}

int main()
{
    char text[20];
    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", text);

    // printf("REQUIRED STRING: %s\n", reverse(text));

    char *p;
    p = reverse(text);

    printf("REQUIRED STRING: %s\n", p);
    return (0);
}