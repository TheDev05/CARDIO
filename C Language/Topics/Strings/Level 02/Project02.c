//**//**Find the first occurrence of character (GIVEN BY USER) in a given string.
//**24.02.2021

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20], findme;
//     int count, key, blank;

//     key = blank = 0;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", &word);

//     printf("ENTER THE CHARACTER YOU WANNA FIND:\n");

//     // scanf("%[^\n]%*c", &findme); //?? DONT USE THIS BCOZ WE ARE ACCEPTING ONLY ONE CHARACTER AND THEN FINDING ITS OCCURENCE..IF USED COUNT VALUE CONFLICTED AND ALSO WORD[0] CANNT EVALUATED.

//     findme = getchar();

//     count = strlen(word);
//     printf("WORD: %d\n", count);

//     // printf("%c\n", word[0]);

//     for (int j = 0; j < count; j++)
//     {

//         if (isblank(word[j]))
//         {

//             blank++; //counting blank spaces so that we can subtract them from output...in order to get position without blank spaces.
//         }

//         if (word[j] == findme)
//         {
//             key++;

//             printf("'%c' OCCURS AT POSITION %d", findme, (j + 1) - blank);
//             return (0);
//         }
//     }

//     if (key == 0)
//     {
//         printf("NOT FOUND\n");
//     }

//     return (0);
// }

//********************************************************************************************************************************
//**RIVISON | 24.02.2021
//? FIND IT POSITION WHAT IF BLANKS ARE THERE AS 7 FOR 'A' IN "ME SHIFA" NOT 8

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20], findme;
//     int count, blank, key;

//     blank = key = key = 0;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", &word);

//     printf("ENTER THE CHARACTER YOU WANT TO FIND:\n");
//     findme = getchar();

//     count = strlen(word);

//     for (int i = 0; i < count; i++)
//     {

//         if (isblank(word[i]))
//         {
//             blank++;
//         }

//         if (findme == word[i])
//         {
//             key++;
//             printf("%c FOUND AT POSITION %d\n", findme, i + 1 - blank);
//             return (0);
//         }
//     }
//     if (key == 0)
//     {
//         printf("%c NOT FOUND\n", findme);
//     }

//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    char text[20];
    printf("ENTER YOUR STRING:\n");
    fgets(text, 20, stdin);

    char findme;
    printf("ENTER CHARACTER U WANNA FIND:\n");
    findme = getchar();

    int blank = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {

        if (text[i] == ' ')
        {
            blank++;
        }

        if (findme == text[i])
        {
            printf("%c occured first at: %d\n", findme, i + 1 - blank);
            break;
        }
    }

    return (0);
}