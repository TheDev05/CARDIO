// ** Find the last occurrence of a word in a given string.
// ** 09.03.2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sen[20], word[20];
    int count1, count2, key, store, p;
    store = key = 0;

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", sen);

    printf("ENTER YOUR WORD YOU WANNA CHECK:\n");
    scanf("%[^\n]%*c", word);

    count1 = strlen(sen);
    count2 = strlen(word);
    p = count2;

    printf("COUNT1:%d\n COUNT2: %d\n", count1, count2);

    for (int i = count2 - 1; i >= 0; i--)
    {
        for (int j = count1 - 1; j >= 0; j--)
        {

            if (word[i] == sen[j])
            {

                while (0 < p)
                {
                    if (word[i] == sen[j])
                    {
                        key++;
                    }
                    i--;
                    j--;
                    p--;store = j;
                }
            }
            if (key == count2)
            {
                printf("WORD '%s' LAST OCCURS AT INDEX %d\n", word, j+1); //! WHY HERE J+1 IS NEEDE ... THINK?
                return (0);
            }
        }
    }
    printf("WORD '%s' DOESNOT OCCURS IN THIS STRING\n");
    return (0);
}

//*************************************************************************************************************************************************
// ** Find the last occurrence of a word in a given string.
//**REVISION|11.03.21
//**UPDATED**

#include <stdio.h>
#include <string.h>

int main()
{
    char sen[20], word[10];
    int count1, count2, key, res;
    key = 0;

    printf("ENTER YOUR SENTENCE:\n");
    scanf("%[^\n]%*c", sen);

    count1 = strlen(sen);

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", word);

    count2 = strlen(word);

    for (int i = count2 - 1; i >= 0; i--)
    {
        for (int j = count1 - 1; j >= 0; j--)
        {
            if (word[i] == sen[j])
            {
                res = j;
                while (i >= 0)
                {
                    if (word[i] = sen[j])
                    {
                        key++;
                    }
                    i--;
                    j--;
                }
            }
            if (key == count2)
            {
                printf("WORD '%s' LAST OCCURS AT INDEX '%d'\n", word, res-1);
                return (0);
            }
        }
    }

    printf("WORD DOESNOT OCCURS\n");
    return (0);
}