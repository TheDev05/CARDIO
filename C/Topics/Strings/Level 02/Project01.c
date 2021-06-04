//**Find the first occurrence of a special character in a given string.
//**24.02.2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[20];
    int count, key;
    key = 0;

    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", &str);

    count = strlen(str);

    for (int i = 0; i < count; i++)
    {
        if (!isalnum(str[i]) && !isblank(str[i]))
        {
            key++;
            printf("FIRST OCCURS AT: %d POSITION INCLUDING BLANK SPACES AND THE CHARACTER IS %c", i+1, str[i]);
            return (0);
        }
    }

    if (key == 0)
    {
        printf("NO CHARACTER IS IN THE STRING\n");
    }

    return (0);
}