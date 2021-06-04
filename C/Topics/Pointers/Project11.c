// ** Find the length of string using pointers.

#include <stdio.h>
#include <string.h>
int findlen(char word[]);
int main()
{
    char word[20];
    int count;

    printf("ENTER YOUR SENTENCE:\n");
    scanf("%[^\n]%*c", word);

    count = findlen(word);

    printf("LENGTH COUNT: %d\n", count);
    return (0);
}

int findlen(char word[])
{
    int count;
    count = strlen(word);
    return (count);
}