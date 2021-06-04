//** Find reverse of a string using pointers.

#include <stdio.h>
#include <string.h>
void reverse(char word[]);

int main()
{
    char word[10];

    printf("ENTER YOUR SSENTENCE:\n");
    scanf("%[^\n]%*c", word);

    reverse(word);

    printf("REVERSE SENTENCE: %s\n", word);
    return (0);
}

void reverse(char word[])
{
    int count;
    char save;
    count = strlen(word);

    for (int i = 0; i < count / 2; i++)
    {
        save = word[i];
        word[i] = word[(count - 1) - i];
        word[(count - 1) - i] = save;
    }
}