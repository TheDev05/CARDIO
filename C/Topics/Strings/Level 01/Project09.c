//**Find a total number of alphabets, digits or special character(excluding blankspaces) in a string.
//**23.02.2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sent[50];
    int count, lett, dig, charc;
    count = lett = dig = charc = 0;

    printf("ENTER YOUR SENTENCE:\n");
    scanf("%[^\n]%*c", &sent);

    count = strlen(sent);

    for (int i = 0; i < count; i++)
    {
        if (isalpha(sent[i]))
        {
            lett++;
        }

        else if (isdigit(sent[i]))
        {
            dig++;
        }
        else
            charc++;
    }

    printf("ALPABET:%d\n DIGITS:%d\n CHARACTER:%d \n", lett, dig, charc);
    return (0);
}