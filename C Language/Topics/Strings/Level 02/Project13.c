//**Replace the last occurrence of a character with another in a string.
//** 09.03.2021

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char word[20], find, fill;
//     int count;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", word);

//     count = strlen(word);

//     printf("ENTER THE WORD YOU WANT TO REMOVE AND THE WORD YOU WANNA REPLACE WITH:\n");
//     find = getchar();
//     fflush(stdin);
//     fill = getchar();

//     for (int i = count - 1; i >= 0; i--)
//     {
//         if (word[i] == find)
//         {
//             word[i] = fill;
//             break;
//         }
//     }

//     printf("AFTER REMOVAL OF '%c' FROM STRING AND REPLACING WITH '%c' IT BECOMES: %s\n", find, fill, word);
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

    char remove, replace;
    printf("ENTER CHARACTER U WANNA REMOVE:\n");
    remove = getchar();

    fflush(stdin);

    printf("ENTER CHARACTER U WANNA REPLACE WITH:\n");
    replace = getchar();

    int count = strlen(text);

    for (int i = count - 1; i >= 0; i--)
    {
        if (remove == text[i])
        {
            text[i] = replace;
            break;
        }
    }

    printf("REQUIRED STRING: %s", text);
    return (0);
}