//** Put all occurrences of a character with another in a string.
//** 09.03.2021

#include <stdio.h>
#include <string.h>

int main()
{
    char word[20], find, fill;
    int count;

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", word);

    count = strlen(word);

    printf("ENTER THE CHARACTER YOU WANNA REMOVE AND REPLACE WITG:\n");
    find = getchar();
    fflush(stdin);
    fill = getchar();

    for (int i = 0; i < count; i++)
    {
        if (word[i] == find)
        {
            word[i] = fill;
        }
    }

    printf("YOUR WORD AFTER REMOVING '%c' AND REPLACING WITH '%c' IS: %s\n", find, fill, word);

    return (0);
}