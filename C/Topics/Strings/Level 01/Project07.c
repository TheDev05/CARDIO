//**Convert lowercase string to uppercase.
//**23.02.2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[20];
    int count;

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", &word);

    count = strlen(word);

    for (int i = 0; i < count; i++)
    {
        if (islower(word[i]))
        {
            word[i] = toupper(word[i]);
        }
    }

    printf("YOUR FINAL WORD IS:\n");
    printf("%s", word);

    return (0);
}