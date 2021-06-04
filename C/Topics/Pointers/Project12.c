//**In short How to Copy one string to another using pointer.

#include <stdio.h>
#include <string.h>
void copy(char word1[], char word2[]);

int main()
{
    char word1[10], word2[10];

    printf("ENTER FIRST WORD:\n");
    scanf("%[^\n]%*c", word1);

    copy(word1, word2);

    printf("WORD 2 IS: %s", word2);
    return (0);
}

void copy(char word1[], char word2[])
{
    strcpy(word2, word1);
}