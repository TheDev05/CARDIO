//**Find reverse of a string. (TOTAL STRING INC ALL LETTERS)
//**24.02.2021

#include <stdio.h>
#include <string.h>

int main()
{
    char sen[20], rev[20];
    int count;

    printf("ENTER YOUR SENTENCE:\n");
    scanf("%[^\n]%*c", &sen);

    count = strlen(sen);

    for (int i = 0; i < count; i++)
    {
        rev[count - 1 - i] = sen[i];
    }

    printf("YOUR SENTENCE IN REVERSE ORDER IS : %s\n", rev);
    return (0);
}