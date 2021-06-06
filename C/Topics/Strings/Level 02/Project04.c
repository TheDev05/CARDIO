//**Search all occurrences of a character(GIVEN BY USER) in a given string
//**25.02.2021
//**WITH AN EXTRA ARRAY (OTHER THAN STRING ARRAY)

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20], findme;
//     int count, key, blank, index[20];

//     count = key = blank = 0;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", &word);

//     printf("ENTER YOUR CHARACTER WHICH YOU WANNA FIND:\n");
//     findme = getchar();

//     count = strlen(word);

//     for (int i = 0; i < count; i++)
//     {
//         index[i] = -1;

//         if (isblank(word[i]))
//         {
//             blank++;
//         }

//         if (findme == word[i])
//         {
//             index[i] = i + 1 - blank;
//             key++;
//         }
//     }

//     if (key == 0)
//     {
//         printf("%c NOT FOUND\n", findme);
//         return (0);
//     }

//     printf("%c OCCURS TOTAL %d TIMES HAVING POSITIONS:", findme, key);

//     for (int i = 0; i < count; i++)
//     {
//         if (index[i] != -1)
//         {
//             printf("\n%d", index[i]);
//         }
//     }

//     return (0);
// }

//***************************************************************************************************************************************
//**REVISION|26.02.2021
//**WITHOUT EXTRA ARRAY (OTHER THAN STRING ARRAY)

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20], findme;
//     int count, blank, key;

//     key = 0;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", &word);

//     printf("ENTER THE CHARACTER YOU WANNA FIND ITS ALL OCCURENCE:\n");
//     findme = getchar();

//     count = strlen(word);

//     printf("%c OCCURS AT POSITION:\n",findme);

//     for (int i = 0; i < count; i++)
//     {
//         blank = 0;
//         if (findme == word[i])
//         {
//             key++;

//             for (int j = 0; j <= i; j++) //? JAHA MILA USKE PAHLE TAK KITNE BLANK SPACES HAI UTNE HAM MINUS KAR DENGE
//             {
//                 if (isblank(word[j]))
//                 {
//                     blank++;
//                 }
//             }

//             printf("%d ", i + 1 - blank);
//         }
//     }

//     if (key == 0)
//     {
//         printf("NULL; NO OCCURENCE\n");
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
     scanf("%[^\n]%*c", text);

    char findme;
    printf("ENTER THE CHARACTER U WANNA ITS OCCURENCE:\n");
    findme = getchar();

    for (int i = 0; text[i] != '\0'; i++) //* PRINTING INDEX POSITION
    {
        if (findme == text[i])
        {
            printf("AT INDEX text[%d]\n", i);
        }
    }

    // for (int i = 0; text[i] != '\0'; i++) //* PRINTING COUNTING POSITION
    // {
    //     if (findme == text[i])
    //     {
    //         int blank = 0;
    //         for (int j = 0; j <= i; j++)
    //         {
    //             if (text[j] == ' ')
    //             {
    //                 blank++;
    //             }
    //         }

    //         printf("AT POSITION %d\n", i + 1 - blank);
    //     }
    // }

    return (0);
}