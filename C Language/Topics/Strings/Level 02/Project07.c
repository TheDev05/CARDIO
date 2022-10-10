//***Count frequency of each character in a string.
//*** 04.03.2021

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20];
//     int count, key, index[20];

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", word);

//     count = strlen(word);

//     for (int i = 0; i < count; i++)
//     {
//         key = 1;
//         for (int j = i + 1; j < count; j++)
//         {
//             if (word[i] == word[j] && !isblank(word[i]) && !isblank(word[j]))
//             {
//                 key++;
//                 index[j] = -1;
//             }

//             if (isblank(word[i]))
//             {
//                 index[i] = -1;
//             }

//             if (isblank(word[j]))
//             {
//                 index[j] = -1;
//             }
//         }

//         if (index[i] != -1)
//         {
//             index[i] = key;
//         }
//     }

//     printf("OCCURENCE OF CHARACTER:\n");
//     for (int i = 0; i < count; i++)
//     {
//         if (index[i] != -1)

//             printf("%c = %d\n", word[i], index[i]);
//     }
//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    char text[20];
    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", text);

    int data[20] = {'0'};
    int count = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        int key = 1;
        for (int j = i + 1; text[j] != '\0'; j++)
        {
            if (text[i] == text[j] && data[i] != -1)
            {
                key++;
                data[j] = -1;
            }
        }

        if (text[i] == ' ')
        {
            data[i] = -1;
        }

        if (data[i] != -1)
        {
            data[i] = key;
        }

        count++;
    }

    for (int i = 0; i < count; i++)
    {
        if (data[i] != -1 && data[i] != 0)
        {
            printf("LETTER '%c' OCCURS '%d' TIMES\n", text[i], data[i]);
        }
    }

    return (0);
}