//** Delete all occurrence of a word in a given string.
//** 12.03.21

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char sen[20], word[10];
//     int count1, count2, key, p, res_j, res_i;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", sen);

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", word);

//     count1 = strlen(sen);
//     count2 = strlen(word);

//     for (int i = 0; i < count2; i++)
//     {
//         for (int j = 0; j < count1; j++)
//         {

//             key = 0;
//             p = j;
//             res_j = j;
//             res_i = i;

//             if (word[i] == sen[j])
//             {
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
//             }
//             j = res_j;
//             i = res_i;
//             // printf("I:%d\n j:%d", i, j);
//         }
//         break;
//     }
//     printf("YOUR SEN AFTER REMOVING '%s' IS:\n%s\n", word, sen);
//     return (0);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <string.h>

int main()
{
    char text[20];
    char word[10];

    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", text);

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", word);

    int count_word = strlen(word);
    int count_text = strlen(text);

    for (int i = 0; i < count_word; i++)
    {
        if (word[0] == text[i])
        {
            int key = 0;
            int res_i = i;

            for (int j = 0; j < count_word; j++)
            {
                if (word[j] == text[i])
                {
                    key++;
                }
                i++;
            }

            i = res_i;

            if (key == count_word)
            {
                for (int k = 0; k < count_word + 1; k++)
                {
                    while (i < count_text)
                    {
                        text[i] = text[i + 1];
                        i++;
                    }
                    i = res_i;
                    count_text--;
                }
            }
            i = res_i;
        }
    }
    printf("REQUIRED STRING: %s", text);
    return (0);
}