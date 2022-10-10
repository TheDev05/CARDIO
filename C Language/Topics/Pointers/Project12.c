//**In short How to Copy one string to another using pointer.

// #include <stdio.h>
// #include <string.h>
// void copy(char word1[], char word2[]);

// int main()
// {
//     char word1[10], word2[10];

//     printf("ENTER FIRST WORD:\n");
//     scanf("%[^\n]%*c", word1);

//     copy(word1, word2);

//     printf("WORD 2 IS: %s", word2);
//     return (0);
// }

// void copy(char word1[], char word2[])
// {
//     strcpy(word2, word1);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

void copy(char *p1, char *p2)
{
    int i;
    for (i = 0; *(p1 + i) != '\0'; i++)
    {
        *(p2 + i) = *(p1 + i);
    }
    *(p2 + i) = '\0';
}

int main()
{
    char text1[20], text2[20];

    printf("ENTER YOUR TSRING:\n");
    scanf("%[^\n]%*c", text1);

    copy(text1, text2);

    printf("STRING 2: %s", text2);
    return (0);
}