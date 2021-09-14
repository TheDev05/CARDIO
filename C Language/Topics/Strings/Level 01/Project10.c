//**Count total number of vowels and consonants in a string.
//**23.02.2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[20];
    int count, vow, con, charc;
    count = vow = con = charc = 0;

again:
    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", &word);
    count = strlen(word);

    for (int i = 0; i < count; i++)
    {
        if (isalpha(word[i]))
        {

            word[i] = tolower(word[i]);
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'o' || word[i] == 'i' || word[i] == 'u')
            {
                vow++;
            }

            else
                con++;
        }

        else
            charc++;
    }

    printf("VOWEL: %d\n CONSONANT: %d\n", vow, con);
    if (charc == count)
    {
        printf("WORD HAVE NO ALPHABETS, ENTER AGAIN\n");
        goto again;
    }
    return (0);
}