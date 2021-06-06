//** Remove all repeated characters from a given string
//TODO: IMPORTANT

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20];
//     int count, key;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", word);

//     count = strlen(word);

//     for (int i = 0; i < count; i++)
//     {
//         for (int j = i + 1; j < count; j++)
//         {
//             if (word[i] == word[j] && !isblank(word[i]) && !isblank(word[j]))
//             {
//                 while (j < count)
//                 {
//                     word[j] = word[j + 1];
//                     j++;
//                 }
//                 count--;
//                 j--;
//             }
//         }
//     }

//     printf("AFTER REMOVING ALL REPEATED CHARACTER YOUR STRING IS: %s\n", word);
//     return (0);
// }

//***********************************************************************************************************************************************
//**RIVISON|02.04.21
//**//** Remove all repeated characters from a given string

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char sen[20];
//     int count;

//     printf("ENTER YOUR STRING:\n");
//     scanf("%[^\n]%*c", sen);

//     count = strlen(sen);

//     for (int i = 0; i < count; i++)
//     {
//         for (int j = i + 1; j < count; j++)
//         {
//             if (sen[i] == sen[j]&& !isblank(sen[i]) && !isblank(sen[j]))
//             {
//                 while (j < count)
//                 {
//                     sen[j] = sen[j + 1];
//                     j++;
//                 }
//                 count--;
//                 j--;
//             }
//         }
//     }

//     printf("AFTER REMOVING DUPLICS: %s\n", sen);
//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <string.h>

void delete (char *p, int index, int count)
{
    while (index < count)
    {
        *(p + index) = *(p + index + 1);
        index++;
    }

    *(p + count - 1) = '\0';
}

int main()
{
    char text[20];
    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", text);

    int count = strlen(text);

    for (int i = 0; i < count; i++)
    {
        int key = 0;
        for (int j = i + 1; j < count; j++)
        {
            if (text[i] == text[j])
            {
                key = 1;
                int res_j = j;

                delete (text, j, count);
                count--;
                j = j - 1;
            }
        }
        if (key == 1)
        {
            delete (text, i, count);
            count--;
            i--;
        }
    }

    printf("REQUIRED STRING: %s", text);
    return (0);
}