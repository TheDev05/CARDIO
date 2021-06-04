//**Concatenate two strings using pointers.

#include <stdio.h>
#include <string.h>
void con(char word1[], char word2[]);

int main()
{
    char word1[10], word2[10];
    int count;

    printf("ENTER FIRST WORD:\n");
    scanf("%[^\n]%*c", word1);

    printf("ENTER SECOND WORD:\n");
    scanf("%[^\n]%*c", word2);

    count = strlen(word1);

    word1[count] = ' ';
    word1[count + 1] = '\0';

    con(word1, word2);

    printf("WORD 1 IS NOW BECOME: %s\n", word1);
    return (0);
}

void con(char word1[], char word2[])
{

    strcat(word1, word2);
}