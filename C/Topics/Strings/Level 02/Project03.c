//****** Find the last occurrence of a character in a given string
//***** 25.02.2021

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20], findme;
//     int key, count, blank, index[20];

//     key = count = blank = 0;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", &word);

//     printf("ENTER THE CHRACTER YOU WANT TO FIND:\n");
//     findme = getchar();

//     count = strlen(word);
//     printf("COUNT: %d", count);

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

//     for (int i = count - 1; i >= 0; i--)
//     {
//         if (index[i] != -1)
//         {
//             printf("%c LAST OCCURS AT POSITION %d\n", findme, index[i]);
//             return (0);
//         }
//     }

//     if (key == 0)
//     {
//         printf("%c NOT FOUND\n", findme);
//     }
// }

//************************************************************************************************************************************************
//**RIVISON|25.02.2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char word[20], findme;
    int count, key, blank;

    key = blank = count = 0;

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", &word);

    printf("ENTER THE CHARACTER YOU WANT TO FIND:\n");
    findme = getchar();

    count = strlen(word);

    //  for (int j = 0; j <= i; j++) //? LOOP COUNT ALL BLANKS FAILED OR WONG OUTPUT AT (ANK ZA ZZZ; CHECK FOR, 'A' )WE NEED BLANK COUNT TILL OUR LETTER OCCURENCE
    //         {

    //             if (isblank(word[j]))
    //             {
    //                 blank++;
    //             }
    //         }


    for (int i = count - 1; i >= 0; i--)
    {

        if (findme == word[i])
        {
            key++;

            for (int j = 0; j <= i; j++) //? LOOP START FROM FIRST LETTER CHECKING FOR ANY SPACE BUT STOP WHERE LAST LETTER IS FOUND
            {

                if (isblank(word[j]))
                {
                    blank++;
                }
            }

            printf("BLANK: %d", blank);

            printf("i: %d", i);
            printf("THE LAST OCCURENCE OF %c IS AT %d\n", findme, i + 1 - blank);
            return (0);
        }
    }

    if (key == 0)
    {
        printf("%c IS NOT FOUND\n", findme);
    }
    return (0);
}