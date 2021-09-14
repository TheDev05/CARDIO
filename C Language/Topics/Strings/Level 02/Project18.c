//** Count occurrences of a word in a given string.
//** 11.03.21

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char word[10], sen[20];
//     int count1, count2, key, occur,res_i,res_j;

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
//             key = 0;
//             res_j=j; //? RESERVING ITERATIONS VALUES
//             res_i=i;
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
//                 }
//             }
//             j=res_j; //? ASSIGNING RESERVED CORRECT ITERATIONS VALUES
//             i=res_i;
//         }
//     }
//     if (occur > 0)
//     {
//         printf("TOTALL OCCURENCE: %d\n", occur);
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
            int key = 0;
            int res_i = i;

            for (int j = 0; j < count_word; j++)
            {
                if (text[i] == word[j])
                {
                    key++;
                    i++;
                }
            }

            if (key == count_word)
            {
                flag++;
            }

            i = res_i;
        }
    }

    printf("TOTAL OCCURENCE: %d", flag);
    return (0);
}