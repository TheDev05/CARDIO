//**Reverse order of words in a given string...REVERSE ONLY WORDS
//**24.02.2021
//!!! ***INCOMPLETE***

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sen[20], rev[20];
    int count, key;
    key = 0;

    printf("ENTER YOUR SENTENCE:\n");
    scanf("%[^\n]%*c", &sen);

    count = strlen(sen);

    for (int i = 0; i < count; i++)
    {
        if (!isblank(sen[i]))
        {
            key++;
        }
    }

    printf("%d", key);
    return (0);
}