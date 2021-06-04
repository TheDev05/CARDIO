//**Find the length of a string...WE ARE FINDING LENGTH OF WORDS IN A STRING.
//**23.02.2021

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char name[20];
    int count,key;
    key=0;

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", name);

    count = strlen(name);

    for (int i = 0; i < count; i++)
    {
        if (isupper(name[i]) || islower(name[i]))
        {
            key++;
        }
    }

    printf("WORD IS OF %d LENGTH\n", key);

    return (0);
}
