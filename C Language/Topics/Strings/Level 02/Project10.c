//*** Delete all occurrences of a character from a string.

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char word[20], find;
//     int count, key;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", word);

//     count = strlen(word);

//     printf("ENTER THE WORD YOU WANNA REMOVE:\n");
//     find = getchar();

//     for (int i = 0; i < count; i++)
//     {
//         if (find == word[i])
//         {
//             while (i < count)
//             {
//                 word[i] = word[i + 1];
//                 i++;
//             }
//             count--;
//         }
//     }

//     printf("AFTER REMOVING '%c', YOUR STRING IS: %s\n", find, word);

//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <string.h>

int main()
{
    char text[20];
    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", text);

    char remove;
    printf("ENTER THE CHARACTER U WANNA REMOVE:\n");
    remove = getchar();

    int count = strlen(text);

    for (int i = 0; i < count; i++)
    {
        if (remove == text[i])
        {
            int index = i;
            while (index < count)
            {
                text[index] = text[index + 1];
                index++;
            }

            i--;
            count--;
            text[count] = '\0';
        }
    }

    printf("REQUIRED STRING: %s", text);
    return (0);
}
