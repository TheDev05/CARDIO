//** Remove all extra blank spaces from the given string
//** 21.03.21

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char sen[20];
//     int count, key, res_index;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", sen);

//     count = strlen(sen);

//     for (int i = 0; i < count; i++) //? removing blank from forward direction
//     {
//         if (isblank(sen[i]))
//         {
//             res_index = i;
//             key = 0;

//             while (isblank(sen[i]))
//             {
//                 key++;
//                 i++;
//             }
//             i = res_index;

//             for (int j = 0; j < key; j++)
//             {
//                 while (i < count)
//                 {
//                     sen[i] = sen[i + 1];
//                     i++;
//                 }
//                 count--;
//                 i = res_index;
//             }
//             break;
//         }
//     }

//     for (int p = count - 1; p >= 0; p--) //? removing blanks from last direction
//     {
//         if (isblank(sen[p]))
//         {
//             res_index = p;
//             key = 0;
//             while (isblank(sen[p]))
//             {
//                 key++;
//                 p--;
//             }
//             p = p + 1;
//             res_index = p;

//             for (int q = 0; q < key; q++)
//             {
//                 while (p < count)
//                 {
//                     sen[p] = sen[p + 1];
//                     p++;
//                 }
//                 count--;
//                 p = res_index;
//             }
//             break;
//         }
//     }

//     for (int m = 0; m < count; m++)//? removing mid extra blanks
//     {
//         if (isblank(sen[m]))
//         {
//             key = 0;
//             res_index = m;
//             while (isblank(sen[m]))
//             {
//                 key++;
//                 m++;
//             }
//             m = res_index + 1; //? we want 1 blank between two words so move index one blank after(leaving 1 blank)

//             if (key > 1) //? if blank in mid is more than one remove that.
//             {
//                 for (int n = 0; n < key - 1; n++)
//                 {
//                     while (m < count)
//                     {
//                         sen[m] = sen[m + 1];
//                         m++;
//                     }
//                     count--;
//                     m = res_index + 1;
//                 }
//             }
//             m = res_index + 1;
//         }
//     }

//     printf("SENTENCE:\n%spp\n", sen);
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
        int index = 0;

        for (int i = 0; text[i] == ' '; i++)
        {
            while (index < count)
            {
                text[index] = text[index + 1];
                index++;
            }
            count--;
            index = 0;
            i--;
        }
    }

    if (text[count - 1] == ' ')
    {
        int index = count - 1;
        for (int i = count - 1; text[i] == ' '; i--)
        {
            while (index < count)
            {
                text[index] = text[index + 1];
                index++;
            }
            count--;
            index = count - 1;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (text[i] == ' ' && text[i + 1] == ' ')
        {
            i = i + 1;
            int j = i;
            int index = i;

            for (j; text[j] == ' '; j++)
            {
                while (index < count)
                {
                    text[index] = text[index + 1];
                    index++;
                }
                count--;
                index = i;
                j--;
            }
        }
    }

    printf("REQUIRD STRING: %s", text);
    return (0);
}