#include <stdio.h>
#include <string.h>

int main()
{
    char sen[20], word[10];
    int count1, count2, key, p, res_j, res_i;

    printf("ENTER YOUR SENTENCE:\n");
    scanf("%[^\n]%*c", sen);

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", word);

    count1 = strlen(sen);
    count2 = strlen(word);

    for (int i = 0; i < count2; i++)
    {
        for (int j = 0; j < count1; j++)
        {

            key = 0;
            p = j;
            res_j = j;
            res_i = i;

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
                    p = res_j;
                }
            }
            j = res_j;
            i = res_i;
            // printf("I:%d\n j:%d", i, j);
        }
        break;
    }
    printf("YOUR SEN AFTER REMOVING '%s' IS:\n%s\n", word, sen);
    return (0);
}
