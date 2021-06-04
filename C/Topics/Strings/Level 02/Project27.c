//** Replace a word in a string by user entered word
//** 23.02.2021

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sen[50], word[10], insert[10];
    int key, count_sen, count_word, count_insert, res_i, res_j, count_sen2, index;

    printf("ENTER YOUR SENTENCE:\n");
    scanf("%[^\n]%*c", sen);

    printf("ENTER THE WORD YOU WANNA REPLACE:\n");
    scanf("%[^\n]%*c", word);

    // printf("ENTER THE WORD YOU WANNA INSERT:\n");
    // scanf("%[^\n]%*c", insert);

    count_sen = strlen(sen);
    // count_sen2 = count_sen;
    // count_sen2=index;
    count_word = strlen(word);
    // count_insert = strlen(insert);

    for (int i = 0; i < count_word; i++)
    {
        for (int j = 0; j < count_sen; j++)
        {
            if (word[i] == sen[j])
            {

                res_i = i;
                res_j = j;
                key = 0;
                while (i < count_word)
                {
                    if (word[i] == sen[j])
                    {
                        key++;
                    }
                    i++;
                    j++;
                }
                i = res_i;
                j = res_j;
                if (key == count_word) //? word exists
                {

                    for (int p = 0; p < count_word + 1; p++) //? delete
                    {
                        while (j < count_sen)
                        {
                            sen[j] = sen[j + 1];
                            j++;
                        }
                        count_sen--;
                        j = res_j;
                    }

                    // for (int t = 0; t < count_insert + 1; t++)
                    // {
                    //     sen[count_sen] = '\b';
                    //     count_sen++;
                    // }

                    // for (int k = 0; k < count_insert + 1; k++) //? insert space creation
                    // {
                    //     while (count_sen2 > j)
                    //     {
                    //         sen[count_sen2 + 1] = sen[count_sen2];
                    //         count_sen2--;
                    //     }
                    //     // count_sen++;
                    //     count_sen2 = index;
                    // }

                    // for (int q = 0; q < count_insert; q++)
                    // {
                    //     sen[j] = insert[q];
                    //     j++;
                    // }
                    break;
                }
            }
        }
        break;
    }
    printf("SEN:\n%s\n", sen);
    return (0);
}