//**Count total number of words in a string
//**23.02.2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sen[20];
    int count, space;
    count = space = 0;

    printf("ENTER YOUR SENTENCES:\n");
    scanf("%[^\n]%*c", &sen);

    count = strlen(sen);

    for (int i = 0; i < count; i++)
    {
        if (isblank(sen[i]))
        {
            space++;
        }
    }

    printf("TOTAL WORDS ARE: %d", space + 1);
    return (0);
}