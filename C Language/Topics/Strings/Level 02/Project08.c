//**Remove the first occurrence of a character(given by user) from a string.
//**04.03.2021

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20], remove;
//     int count, key;

//     printf("ENTER YOUR STRING:\n");
//     scanf("%[^\n]%*c", word);

//     count = strlen(word);

//     printf("ENTER THE CHAREACTER YOU WANNA REMOVE:\n");
//     remove = getchar();

//     for (int i = 0; i < count; i++)
//     {
//         if (remove == word[i])
//         {
//             while (i < count)
//             {
//                 word[i] = word[i + 1];
//                 i++;
//             }
//             count--;
//             break;
//         }
//     }

//     printf("%s", word);
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
    printf("ENTER CHARACTER TO REMOVE: ");
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
            text[count - 1] = '\0';
            break;
        }
    }

    printf("REQUIRED STRING: %s", text);
    return (0);
}