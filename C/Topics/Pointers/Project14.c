//**Compare two strings using pointers.

#include <stdio.h>
#include <string.h>

int com(char word1[], char word2[])
{
    int key;
    key = strcmp(word1, word2);
    return (key);
}

int main()
{
    char word1[10], word2[10];

    printf("ENTER FIRST WORD:\n");
    scanf("%[^\n]%*c", word1);

    printf("ENTER SECOND WORD:\n");
    scanf("%[^\n]%*c", word2);

    if (com(word1, word2) == 0)
        printf("SAME STRINGS\n");
    else
        printf("DIFFRENT STRINGS\n");

    return (0);
}