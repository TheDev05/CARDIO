//**Convert lowercase string to uppercase.
//**23.02.2021

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20];
//     int count;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", &word);

//     count = strlen(word);

//     for (int i = 0; i < count; i++)
//     {
//         if (islower(word[i]))
//         {
//             word[i] = toupper(word[i]);
//         }
//     }

//     printf("YOUR FINAL WORD IS:\n");
//     printf("%s", word);

//     return (0);
// }
// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    char text[20];
    printf("ENTER YOUR TEXT:\n");
    fgets(text, 20, stdin);

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i] - 0x20;
        }
    }

    printf("REQUIRED STRING: %s", text);
    return (0);
}