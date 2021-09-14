//**String Char-Case Change
//**21.02.2021

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char sen[50], m;
//     int count;

//     printf("ENTER YOUR WORD:\n");
//     // fgets(sen, 40, stdin); //? ***WE CANNT USE FGETS WITH STRLEN IT GIVES WRONG COUNT coz it terminates with \0 BUT OKAY WITH GETS AND SCAN[^]
//     scanf("%[^\n]%*c", &sen);

//     count = strlen(sen);

//     for (int i = 0; i < count; i++)
//     {
//         if (isupper(sen[i]))
//         {
//             sen[i] = tolower(sen[i]);
//             m = sen[i]; //? **IMPORTANT: WE USE A KEY IF THIS IF IS EXECUTED THEN THAT WORD IS NOT FURTHER EXECUTED BY NEXT IF.
//         }

//         if (islower(sen[i]) && sen[i] != m)
//         {
//             sen[i] = toupper(sen[i]);
//         }
//     }

//     printf("OUTPUT:\n");
//     puts(sen);

//     return (0);
// }

//************************************************************************************************************************
//**RIVISON|23.02.2021

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char name[20];
//     int key, count;

//     printf("ENTER YOUR LETTER OR SENTENCE:\n");
//     scanf("%[^\n]%*c", &name);

//     count = strlen(name);

//     for (int i = 0; i < count; i++)
//     {
//         if (isupper(name[i]))
//         {
//             name[i] = tolower(name[i]);
//             key = name[i];
//         }

//         if (islower(name[i]) && name[i] != key)
//         {
//             name[i] = toupper(name[i]);
//         }
//     }

//     printf("YOUR SENTENCE: %s\n", name);

//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <string.h>

int main()
{
    char text[20];
    printf("ENTER YOUR TEXT:\n");
    fgets(text, 20, stdin);

    int count = strlen(text) - 1;
    printf("COUNT:%d", count);

    for (int i = 0; i < count; i++)
    {
        if ((text[i] >= 'A') && (text[i] <= 'Z'))
        {
            text[i] = text[i] + 0x20;
        }
        else if ((text[i] >= 'a') && (text[i] <= 'z'))
        {
            text[i] = text[i] - 0x20;
        }
    }

    printf("REQUIRED STRING: %s", text);
    return (0);
}