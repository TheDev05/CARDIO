// ** Find the length of string using pointers.

// #include <stdio.h>
// #include <string.h>
// int findlen(char word[]);
// int main()
// {
//     char word[20];
//     int count;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", word);

//     count = findlen(word);

//     printf("LENGTH COUNT: %d\n", count);
//     return (0);
// }

// int findlen(char word[])
// {
//     int count;
//     count = strlen(word);
//     return (count);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

int length(char *p)
{
    int count;
    for (count = 0; *(p + count) != '\0'; count++)
        ;

    return (count);
}

int main()
{
    char text[20];
    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", text);

    int count = length(text);
    printf("STRING LENGTH IS: %d\n", count);

    return (0);
}