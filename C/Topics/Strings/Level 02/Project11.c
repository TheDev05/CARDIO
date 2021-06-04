//** Remove all repeated characters from a given string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[20];
    int count, key;

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", word);

    count = strlen(word);

    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (word[i] == word[j] && !isblank(word[i]) && !isblank(word[j]))
            {
                while (j < count)
                {
                    word[j] = word[j + 1];
                    j++;
                }
                count--;
                j--;
            }
        }
    }

    printf("AFTER REMOVING ALL REPEATED CHARACTER YOUR STRING IS: %s\n", word);
    return (0);
}

//***********************************************************************************************************************************************
//**RIVISON|02.04.21
//**//** Remove all repeated characters from a given string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sen[20];
    int count;

    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", sen);

    count = strlen(sen);

    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (sen[i] == sen[j]&& !isblank(word[i]) && !isblank(word[j]))
            {
                while (j < count)
                {
                    sen[j] = sen[j + 1];
                    j++;
                }
                count--;
                j--;
            }
        }
    }

    printf("AFTER REMOVING DUPLICS: %s\n", sen);
    return (0);
}