//**Remove the first occurrence of a character(given by user) from a string.
//**04.03.2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[20], remove;
    int count, key;

    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", word);

    count = strlen(word);

    printf("ENTER THE CHAREACTER YOU WANNA REMOVE:\n");
    remove = getchar();

    for (int i = 0; i < count; i++)
    {
        if (remove == word[i])
        {
            while (i < count)
            {
                word[i] = word[i + 1];
                i++;
            }
            count--;
            break;
        }
    }

    printf("%s", word);
    return (0);
}