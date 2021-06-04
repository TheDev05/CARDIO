#include <stdio.h>
#include <string.h>

int main()
{
    char word[20], find, fill;
    int count, key;

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", word);

    count = strlen(word);
    printf("ENTER THE CHARACTER YOU WANT TO REMOVE AND THE CHARACTER YOU WANT TO REPLACE WITH:\n");

    find = getchar();
    fflush(stdin);
    fill = getchar();

    for (int i = 0; i < count; i++)
    {
        if (word[i] == find)
        {
            word[i] = fill;
            break;
        }
    }

    printf("YOUR STRING AFTER REPLACING OF %c' WITH '%c' IS %s:\n", find, fill, word);
    return (0);
}