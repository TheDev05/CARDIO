//**Replace the first occurrence of a character with another in a string.
//** 09.03.2021

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char word[20], find, fill;
//     int count, key;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", word);

//     count = strlen(word);
//     printf("ENTER THE CHARACTER YOU WANT TO REMOVE AND THE CHARACTER YOU WANT TO REPLACE WITH:\n");

//     find = getchar();//? getchar also reads input from input buffer so the second getchar encounter with \n and termiantes.
//     fflush(stdin);
//     fill = getchar();

//     for (int i = 0; i < count; i++)
//     {
//         if (word[i] == find)
//         {
//             word[i] = fill;//? IMPORATNT: we can use direct assign if we have to copy a single chacter one at a time.
//             break;
//         }
//     }

//     printf("YOUR STRING AFTER REPLACING OF %c' WITH '%c' IS %s:\n", find, fill, word);
//     return (0);
// }

//***********************************************************************************************************************************************
//**RIVISON|02.04.21
//**Replace the first occurrence of a character with another in a string.

#include <stdio.h>
#include <string.h>

int main()
{
    char sen[20], find, set;
    int count;

    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", sen);

    count = strlen(sen);

    printf("ENTER THE CHARCTER YOU WANNA REMOVE:\n");
    find = getchar();

    fflush(stdin);

    printf("ENTER THE CHARACTER THRU WHICH YOU WANNA REPLACE:\n");
    set = getchar();

    for (int i = 0; i < count; i++)
    {
        if (find == sen[i])
        {
            sen[i] = set; //? IMPORATNT: we can use direct assign if we have to copy a single chacter one at a time.
            break;
        }
    }

    printf("OUTPUT STRING: %s\n", sen);
    return (0);
}