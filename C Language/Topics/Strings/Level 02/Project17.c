//**Search all occurrences of a word in a given string.
//! ***4th ATTEMPT, FINALLY***
//**11.03.21**

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char word[10], sen[20];
//     int count1, count2, key, occur, res_i, res_j;
//     int index[10];

//     occur = 0;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", sen);

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", word);

//     count1 = strlen(sen);
//     count2 = strlen(word);

//     for (int i = 0; i < count2; i++)
//     {
//         for (int j = 0; j < count1; j++)
//         {
//             index[j] = -1;
//             key = 0;
//             res_j = j; //? RESERVING ITERATIONS VALUES
//             res_i = i;
//             if (sen[j] == word[i])
//             {
//                 while (i < count2)
//                 {
//                     if (word[i] == sen[j])
//                     {
//                         key++;
//                     }
//                     i++; //? HERE i AND j VALUE GET CHANGED RESULTING WRONG ITERATIONS
//                     j++;
//                 }

//                 if (key == count2)
//                 {
//                     occur++;
//                     index[res_j] = res_j;

//                 }
//             }
//             j = res_j; //? ASSIGNING RESERVED CORRECT ITERATIONS VALUES
//             i = res_i;
//         }
//         break; //WE HOLD FIRST LETTER OF WORD AND THEN CHECK THIS TO WHOLE SENTENCE.. NO NEED TO GO WITH SECOND LETTER
//     }

//     if (occur > 0)
//     {
//         printf("TOTAL OCCURENCE: %d\n", occur);
//         printf("AT INDICES: \n");
//         for (int i = 0; i < count1; i++)
//         {

//             if (index[i] != -1)
//             {
//                 printf("%d\n", index[i]);
//             }
//         }
//     }
//     else
//         printf("NO OCCURENCE");

//     return (0);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <string.h>

int main()
{
    char text[20], word[10];
    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", text);

    printf("ENTER YOUR WORD:\n");
    scanf("%[^\n]%*c", word);

    int count_word = strlen(word);
    int count_text = strlen(text);

    int flag = 0;

    for (int i = 0; i < count_text; i++)
    {
        if (word[0] == text[i])
        {
            int res_i = i;
            int key = 0;

            for (int j = 0; j < count_word; j++)
            {
                if (word[j] == text[i])
                {
                    key++;
                    i++;
                }
            }

            i = res_i;

            if (key == count_word)
            {
                printf("OCCURED AT INDEX text[%d]\n", res_i);
                flag = 1;
            }
        }
    }

    if (flag == 0)
    {
        printf("NOT OCCURED\n");
    }

    return (0);
}