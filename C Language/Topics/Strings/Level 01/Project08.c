//**//**Convert uppercase string to lowercase.
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

    for (int i = 0; i < count; i++)
    {
        if (isupper(word[i]))
        {
            word[i] = tolower(word[i]);
        }
    }

    printf("YOUR WORD IS:\n");
    printf("%s", word);

    return (0);
}
