//**//**C Program to print first letter of sntence.

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char name[20], res[20];
//     int count;

//     printf("ENTER YOUR NAME:\n");
//     scanf("%[^\n]%*c", name);

//     count = strlen(name);

//     printf("%c", name[0]);
//     for (int i = 0; i < count; i++)
//     {
//         if (isblank(name[i]))
//         {
//             printf(" %c", name[i + 1]);
//         }
//     }

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

    for (int i = 0; i < count; i++)
    {
        if (i == 0)
        {
            printf("%c ", text[i]);
        }

        if (text[i] == ' ')
        {
            printf("%c ", text[i + 1]);
        }
    }

    return (0);
}