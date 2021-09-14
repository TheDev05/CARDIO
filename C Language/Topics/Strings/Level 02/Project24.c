//**  Trim trailing white space characters from a given string.
//** 14.03.21

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char sen[20];
//     int count, key, j, res_j, res_i;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", sen);

//     count = strlen(sen);

//     for (int i = count - 1; i >= 0; i--)
//     {

//         while (isblank(sen[i]))
//         {
//             key++;    //? **Conting how many blanks are there at end of sentence
//             i--;

//         }
//         i = i + 1;  //? **Iteration modified then while loop terminat, loop encounter no blanks but that time iteration is decremented(here) by 1.
//                     //? **Making iteration correct
//         res_i = i;

//         for (int p = 0; p < key; p++) //? **Loop run as there are blanks
//         {
//             while (i < count) //? **removing 1 blank at a time then for loop execute and agin remove 1 at a time
//             {
//                 sen[i] = sen[i + 1];
//                 i++;
//             }
//             count--;
//             i = res_i; //? **while sen[i]=sen[i+1] and i++ for while loop our i get changed so providing reserved i for next for loop
//         }
//         break;
//     }
//     printf("SEN:%s\n", sen);
//     return (0);
// }

// ***********************************************************************************************************************************************
// *REVISION|17.03.21

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char sen[20];
//     int count, key, j, res_j;
//     key = 0;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", sen);

//     count = strlen(sen);

//     for (int i = count - 1; i >= 0; i--) //? couting number of blanks from last
//     {
//         if (!isblank(sen[i]))
//         {
//             break;
//         }

//         else
//         {
//             key++;
//             j = i;
//             res_j = j;
//         }
//     }

//     for (int i = 0; i < key; i++) //? removing blanks
//     {
//         while (j < count)
//         {
//             sen[j] = sen[j + 1];
//             j++;
//         }
//         count--;
//         j = res_j;
//     }
//     printf("SEN:\n%s\n", sen);
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

    printf("REQUIRED STRING: %s", text);
    return (0);
}