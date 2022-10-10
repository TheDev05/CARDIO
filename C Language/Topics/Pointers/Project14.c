//**Compare two strings using pointers.

// #include <stdio.h>
// #include <string.h>

// int com(char word1[], char word2[])
// {
//     int key;
//     key = strcmp(word1, word2);
//     return (key);
// }

// int main()
// {
//     char word1[10], word2[10];

//     printf("ENTER FIRST WORD:\n");
//     scanf("%[^\n]%*c", word1);

//     printf("ENTER SECOND WORD:\n");
//     scanf("%[^\n]%*c", word2);

//     if (com(word1, word2) == 0)
//         printf("SAME STRINGS\n");
//     else
//         printf("DIFFRENT STRINGS\n");

//     return (0);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

int len(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
        ;
    return (i);
}

void compare(char *p1, char *p2)
{
    int count1 = len(p1);
    int count2 = len(p2);

    if (count1 != count2)
    {
        printf("BOTH STRINGS ARE NOT EQUAL\n");
        return;
    }

    for (int i = 0; i < count1; i++)
    {
        if (*(p1 + i) != *(p2 + i))
        {
            printf("BOTH STRINGS ARE NOT EQUAL\n");
            return;
        }
    }

    printf("BOTH STRINGS ARE EQUAL\n");
    return;
}

int main()
{
    char text1[20], text2[20];
    printf("ENTER YOUR FIRST STRING:\n");
    scanf("%[^\n]%*c", text1);

    printf("ENTER YOUR SECOND STRING:\n");
    scanf("%[^\n]%*c", text2);

    compare(text1, text2);

    return (0);
}