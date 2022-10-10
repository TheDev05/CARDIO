//** Find reverse of a string using pointers.

// #include <stdio.h>
// #include <string.h>
// void reverse(char word[]);

// int main()
// {
//     char word[10];

//     printf("ENTER YOUR SSENTENCE:\n");
//     scanf("%[^\n]%*c", word);

//     reverse(word);

//     printf("REVERSE SENTENCE: %s\n", word);
//     return (0);
// }

// void reverse(char word[])
// {
//     int count;
//     char save;
//     count = strlen(word);

//     for (int i = 0; i < count / 2; i++)
//     {
//         save = word[i];
//         word[i] = word[(count - 1) - i];
//         word[(count - 1) - i] = save;
//     }
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

void reverse(char *p)
{
    int count = len(p);

    for (int i = 0; i < count / 2; i++)
    {
        int temp = *(p + i);
        *(p + i) = *(p + count - 1 - i);
        *(p + count - 1 - i) = temp;
    }
}

int main()
{
    char text[20];
    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", text);

    reverse(text);

    printf("REVERSED STRING IS: %s\n", text);
    return (0);
}