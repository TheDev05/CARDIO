//**Concatenate two strings using pointers.

// #include <stdio.h>
// #include <string.h>
// void con(char word1[], char word2[]);

// int main()
// {
//     char word1[10], word2[10];
//     int count;

//     printf("ENTER FIRST WORD:\n");
//     scanf("%[^\n]%*c", word1);

//     printf("ENTER SECOND WORD:\n");
//     scanf("%[^\n]%*c", word2);

//     count = strlen(word1);

//     word1[count] = ' ';
//     word1[count + 1] = '\0';

//     con(word1, word2);

//     printf("WORD 1 IS NOW BECOME: %s\n", word1);
//     return (0);
// }

// void con(char word1[], char word2[])
// {

//     strcat(word1, word2);
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

void merge(char *p1, char *p2)
{
    int count1 = len(p1);
    int count2 = len(p2);

    *(p1 + count1) = ' ';
    int j = count1 + 1;

    for (int i = 0; i < count2; i++)
    {
        *(p1 + j) = *(p2 + i);
        j++;
    }

    *(p1 + (count1 + count2) + 1) = '\0';
}

int main()
{
    char text1[20], text2[40];
    printf("ENTER YOUR FIRST STRING:");
    scanf("%[^\n]%*c", text1);

    printf("ENTER SECOND STRING:\n");
    scanf("%[^\n]%*c", text2);

    merge(text1, text2);

    printf("STRING 01 OR MERGED STRING: %s", text1);
    return (0);
}