//***Remove the last occurrence of a word in a given string.
//***11.03.2021* HAPPY SHIVRATRI

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char sen[20], word[10];
//     int count1, count2, key, res_i, res_j, p;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", sen);

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", word);

//     count1 = strlen(sen);
//     count2 = strlen(word);

//     for (int i = 0; i < count2; i++)
//     {
//         for (int j = count1 - 1; j >= 0; j--)
//         {
//             key = 0;
//             res_i = i;
//             res_j = j;
//             p = j;

//             if (word[i] == sen[j])
//             {
//                 if (word[i] == word[count2 - 1]) //? If the first and second letter is same in word as...roar is roar.. for roar, r=r.
//                 {
//                     j = j - (count2 - 1); //** Chanding all index of j To the the first letter of word in sentence...bcoz while searching the first letter of word matched the last letter of word in sentence bcoz iteraion is reversed and first letter and last letter of word is same...due to this assigning next value(removing algo.) i.e sen[p] = sen[p + 1];....get affected
//                     p = p - (count2 - 1);
//                     res_j = res_j - (count2 - 1);
//                 }

//                 while (i < count2) //** SEARCHING WORD IF EXISTS OR NOT
//                 {
//                     if (word[i] == sen[j])
//                     {
//                         key++;
//                     }
//                     i++; //? here first letter of word in sentence is matched
//                     j++;
//                 }

//             }

//             if (key == count2) //** IF FOUND
//             {

//                 for (int m = 0; m < count2 + 1; m++) //** loop runs as the letter are there in that word+1 (one space also have to removed)
//                 {
//                     while (p < count1) //**REMOVING
//                     {
//                         sen[p] = sen[p + 1];
//                         p++;
//                     }
//                     count1--;
//                     p = res_j; //** PROVING RESERVED INDEX
//                 }
//                 break;
//             }
//         }
//     }
//     printf("AFTER REMOVING '%s' FROM LAST YOUR SEN IS:\n%s\n", word, sen);
//     return (0);
// }

//***********************************************************************************************************************************************
//** RIVISON|14.03.21
//***Remove the last occurrence of a word in a given string.

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char word[10], sen[20];
//     int count1, count2, key, p, res_j;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", sen);

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", word);

//     count1 = strlen(sen);
//     count2 = strlen(word);

//     for (int i = 0; i < count2; i++)
//     {
//         for (int j = count1 - 1; j >= 0; j--)
//         {
//             key = 0;
//             p = j;
//             res_j = j;

//             if (word[i] == sen[j])
//             {
//                 if (word[i] == word[count2 - 1])
//                 {
//                     j = j - (count2 - 1);
//                     p = j;
//                     res_j = j;
//                 }

//                 while (i < count2)
//                 {
//                     if (word[i] == sen[j])
//                     {
//                         key++;
//                     }
//                     i++;
//                     j++;
//                 }
//             }
//             if (key == count2)
//             {
//                 for (int m = 0; m < count2 + 1; m++)
//                 {
//                     while (p < count1)
//                     {
//                         sen[p] = sen[p + 1];
//                         p++;
//                     }
//                     count1--;
//                     p = res_j;
//                 }
//                 break;
//             }
//         }
//     }
//     printf("AFTER REMOVING '%s' YOUR SEN IS:\n%s\n", word, sen);
//     return (0);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <string.h>

int main()
{
    char text[20], word[10];
    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", text);

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", word);

    int count_word = strlen(word);
    int count_text = strlen(text);

    for (int i = count_text - 1; i >= 0; i--)
    {
        if (word[count_word - 1] == text[i])
        {
            int key = 0;
            int res_i = i;

            for (int j = 0; j < count_word; j++)
            {
                if (word[(count_word - 1) - j] == text[i])
                {
                    key++;
                    i--;
                }
            }

            if (key == count_word)
            {
                if (text[res_i + 1] == '\0')

                    i = i;

                else
                    i = res_i - (count_word - 1);

                int index = i;
                for (int k = 0; k < count_word + 1; k++)
                {
                    while (i < count_text)
                    {
                        text[i] = text[i + 1];
                        i++;
                    }
                    count_text--;
                    i = index;
                }

                i = res_i;
                break;
            }
        }
    }

    count_word = strlen(word);
    count_text = strlen(text);

    printf("REQUIRD STRING: %s", text);
    return (0);
}