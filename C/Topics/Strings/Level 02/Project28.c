//**//**C Program to print first letter of sntence.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[20], res[20];
    int count;

    printf("ENTER YOUR NAME:\n");
    scanf("%[^\n]%*c", name);

    count = strlen(name);

    printf("%c", name[0]);
    for (int i = 0; i < count; i++)
    {
        if (isblank(name[i]))
        {
            printf(" %c", name[i + 1]);
        }
    }

    return (0);
}