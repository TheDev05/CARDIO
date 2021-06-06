//**Find a total number of alphabets, digits or special character(excluding blankspaces) in a string.
//**23.02.2021


// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char sent[50];
//     int count, lett, dig, charc;
//     count = lett = dig = charc = 0;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", &sent);

//     count = strlen(sent);

//     for (int i = 0; i < count; i++)
//     {
//         if (isalpha(sent[i]))
//         {
//             lett++;
//         }

//         else if (isdigit(sent[i]))
//         {
//             dig++;
//         }
//         else
//             charc++;
//     }

//     printf("ALPABET:%d\n DIGITS:%d\n CHARACTER:%d \n", lett, dig, charc);
//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <ctype.h>

int main()
{
    char text[20];
    printf("ENTER YOUR STRING:\n");
    // fgets(text, 20, stdin); //* FGETS GIVE A MORE CHARACTER DUE TO NEW LINE CHAR
    scanf("%[^\n]%*c", text);

    int alpha = 0, dig = 0, chars = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z' || text[i] >= 'a' && text[i] <= 'z')
        {
            alpha++;
        }
        else if (text[i] >= '0' && text[i] <= '9')
        {
            dig++;
        }
        else if (!isblank(text[i]))
        {
            chars++;
           
        }
    }

    printf("LETTERS: %d\nDIGITS: %d\nSPECIAL CHARACTERS: %d\n", alpha, dig, chars);
    return (0);
}