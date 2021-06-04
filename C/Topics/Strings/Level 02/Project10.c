//*** Delete all occurrences of a character from a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char word[20], find;
    int count, key;

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", word);

    count = strlen(word);

    printf("ENTER THE WORD YOU WANNA REMOVE:\n");
    find = getchar();

    for (int i = 0; i < count; i++)
    {
        if (find == word[i])
        {
            while (i < count)
            {
                word[i] = word[i + 1];
                i++;
            }
            count--;
        }
    }

    printf("AFTER REMOVING '%c', YOUR STRING IS: %s\n", find, word);
    
    return (0);
}
