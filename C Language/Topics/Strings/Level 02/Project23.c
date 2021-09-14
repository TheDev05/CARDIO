//** A Trim leading white space characters from a given string.
//** 14.03.21

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char sen[20];
//     int count, key, res_i;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", sen);

//     count = strlen(sen);

//     for (int i = 0; i < count; i++)
//     {
//         res_i = i;
//         if (!isblank(sen[i]))
//         {
//             break;
//         }

//         else
//         {
//             while (i < count)
//             {
//                 sen[i] = sen[i + 1];
//                 i++;
//             }
//             count--;
//         }
//         i = res_i - 1; //? indxing a less that what we removed now because count decreases.
//     }

//     printf("YOUR SEN AFTER REMOVING LEADING SPACES:\n%s\n", sen);
//     return (0);
// }

// ************************************************************************************************************************************************
// *RIVISON|17.03.21

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char sen[20];
//     int count, key, j;
//     key = 0;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", sen);

//     count = strlen(sen);

//     for (int i = 0; i < count; i++)
//     {
//         if (!isblank(sen[i]))
//         {
//             break;
//         }

//         else
//         {
//             key++;
//         }
//     }

//     for (int i = 0; i < key; i++)
//     {
//         j = 0; //? *when we delete something offset is at one point..if anything removed count becomes short
//         while (j < count)
//         {
//             sen[j] = sen[j + 1];
//             j++;
//         }
//         count--;
//     }

//     printf("SEN:\n%s\n", sen);
//     return (0);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <string.h>

int main()
{
    char text[20];
    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", text);

    int count = strlen(text);

    if (text[0] == ' ')
    {
        int i = 0;

        for (int j = 0; text[j] == ' '; j++)
        {
            while (i < count)
            {
                text[i] = text[i + 1];
                i++;
            }

            count--;
            i = 0;
            j--;
        }
    }

    printf("REQUIRD STRING:%sM", text);
    return (0);
}