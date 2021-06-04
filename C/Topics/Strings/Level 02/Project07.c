//***Count frequency of each character in a string.
//*** 04.03.2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[20];
    int count, key, index[20];

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", word);

    count = strlen(word);

    for (int i = 0; i < count; i++)
    {
        key = 1;
        for (int j = i + 1; j < count; j++)
        {
            if (word[i] == word[j] && !isblank(word[i]) && !isblank(word[j]))
            {
                key++;
                index[j] = -1;
            }

            if (isblank(word[i]))
            {
                index[i] = -1;
            }

            if (isblank(word[j]))
            {
                index[j] = -1;
            }
        }

        if (index[i] != -1)
        {
            index[i] = key;
        }
    }

    printf("OCCURENCE OF CHARACTER:\n");
    for (int i = 0; i < count; i++)
    {
        if (index[i] != -1)

            printf("%c = %d\n", word[i], index[i]);
    }
    return (0);
}