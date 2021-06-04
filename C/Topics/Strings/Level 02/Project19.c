//** Remove the first occurrence of a word from string.
//** 11.03.21

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char word[10], sen[20];
//     int count1, count2, key, res_i, res_j, p;

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

//             if (sen[j] == word[i])
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

//                 if (key == count2)
//                 {
//                     for (int m = 0; m < count2 + 1; m++) //? COUNT2 IS ADDED 1 MORE BECAUSE WE ARE NOT DELETEING ONLY THIS WORD (EQUAL TO     COUNT2) BUT ALSO WE ARE DELETING A SPACE WITH THAT WORD SO THAT NO TWO SPACES ARE LEFT BETWEEN

//                     //** WHY COUNT2 WHY NOT COUNT1, BEACAUSE THE WORD WHICH IS BEING DELETED THATS COUNT WE USE AS ITERATION, SO THAT EACH ITERARTION TRIGGER LOOP AS EQUAL TO THE SIZE OF THAT WORD AND PER LOOP WE DELETE A WORD.
//                     {
//                         while (p < count1)
//                         {
//                             sen[p] = sen[p + 1];
//                             p++; //? THIS MAKE OUR ITERATION WRONG
//                         }
//                         count1--;
//                         p = res_j; //? PROVING RESERVED AND CORRECT ITERATION again because p gets demolished
//                     }
//                     break;
//                 }
//             }
//             // break; //! why here break doenot work?
//                    //? because if the first letter doesnot matches (i.e not if ststement is executed then it occurs to break whole loop without further checking)

//             j = res_j;
//             i = res_i;
//         }

//     }

//     printf("AFTER DELETION: %s", sen);
//     return (0);
// }

// ************************************************************************************************************************************************
// RIVISON|12.03.21
//** Remove the first occurrence of a word from string.

#include <stdio.h>
#include <string.h>

int main()
{
    char sen[20], word[10];
    int count1, count2, key, res_i, res_j, p;

    printf("ENTER YOUR SENTENCE:\n");
    scanf("%[^|\n]%*c", sen);

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", word);

    count1 = strlen(sen);
    count2 = strlen(word);

    for (int i = 0; i < count2; i++)
    {
        for (int j = 0; j < count1; j++)
        {
            key = 0;
            res_i = i;
            res_j = j;
            p = j;
            if (word[i] == sen[j])
            {
                while (i < count2)
                {
                    if (word[i] == sen[j])
                    {
                        key++;
                    }
                    i++;
                    j++;
                }
            }
            if (key == count2)
            {
                for (int m = 0; m < count2 + 1; m++)
                {
                    while (p < count1)
                    {
                        sen[p] = sen[p + 1];
                        p++;
                    }
                    count1--;
                    p=res_j;
                }
                break;
            }
        }
    }

    printf("AFTER DELETION OF '%s' YOUR SEN IS:\n%s\n", word, sen);
    return (0);
}