// ** Find the last occurrence of a word in a given string.
// ** 09.03.2021

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char sen[20], word[20];
//     int count1, count2, key, store, p;
//     store = key = 0;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", sen);

//     printf("ENTER YOUR WORD YOU WANNA CHECK:\n");
//     scanf("%[^\n]%*c", word);

//     count1 = strlen(sen);
//     count2 = strlen(word);
//     p = count2;

//     printf("COUNT1:%d\n COUNT2: %d\n", count1, count2);

//     for (int i = count2 - 1; i >= 0; i--)
//     {
//         for (int j = count1 - 1; j >= 0; j--)
//         {

//             if (word[i] == sen[j])
//             {

//                 while (0 < p)
//                 {
//                     if (word[i] == sen[j])
//                     {
//                         key++;
//                     }
//                     i--;
//                     j--;
//                     p--;store = j;
//                 }
//             }
//             if (key == count2)
//             {
//                 printf("WORD '%s' LAST OCCURS AT INDEX %d\n", word, j+1); //! WHY HERE J+1 IS NEEDE ... THINK?
//                 return (0);
//             }
//         }
//     }
//     printf("WORD '%s' DOESNOT OCCURS IN THIS STRING\n");
//     return (0);
// }

//*************************************************************************************************************************************************
// ** Find the last occurrence of a word in a given string.
//**REVISION|11.03.21
//**UPDATED** | THREE LOOP TIME COMPLEXITY HIGH

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char sen[20], word[10];
//     int count1, count2, key, res;
//     key = 0;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", sen);

//     count1 = strlen(sen);

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", word);

//     count2 = strlen(word);

//     for (int i = count2 - 1; i >= 0; i--)
//     {
//         for (int j = count1 - 1; j >= 0; j--)
//         {
//             if (word[i] == sen[j])
//             {
//                 res = j;
//                 while (i >= 0)
//                 {
//                     if (word[i] = sen[j])
//                     {
//                         key++;
//                     }
//                     i--;
//                     j--;
//                 }
//             }
//             if (key == count2)
//             {
//                 printf("WORD '%s' LAST OCCURS AT INDEX '%d'\n", word, res-1);
//                 return (0);
//             }
//         }
//     }

//     printf("WORD DOESNOT OCCURS\n");
//     return (0);
// }

// *******************************************************************************************************************************
// **RIVISON**
// *DONE: ANKIT IS ABOY, HERE BOY IS ALSO SHOWN AS WORD, CHECK AFTER BEFORE WORD A BLANK THEN THATS WORD

#include <stdio.h>
#include <string.h>

int main()
{
    char text[20];
    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", text);

    char word[10];
    printf("ENTER UR WORD:\n");
    scanf("%[^\n]%*c", word);

    int count_word = strlen(word);
    int count_text = strlen(text);

    for (int i = count_text - 1; i >= 0; i--)
    {
        if (word[count_word - 1] == text[i])
        {
            int res_i = i;
            int key = 0;

            for (int j = 0; j < count_word; j++)
            {
                if (word[count_word - 1 - j] == text[i])
                {
                    key++;
                    i--;
                }
            }

            if (key == count_word && text[res_i - (count_word - 1) - 1] == ' ' && (text[res_i + 1] == ' ' || text[res_i + 1] == '\0'))
            {
                printf("%s OCCUR AT %d", word, res_i - (count_word - 1));
                return (0);
            }
        }
    }
    printf("%s DOESNOT EXIST", word);
    return (0);
}