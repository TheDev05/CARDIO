//**Find the first occurrence of a word in a given string.
//** 09.03.2021
//! THINK AGAIN**

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char sen[20], word[10];
//     int count1, count2, store, key;
//     key = store = 0;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", sen);

//     count1 = strlen(sen);

//     printf("ENTER TEH WORD YOU WANNA FIND:\n");
//     scanf("%[^\n]%*c", word);

//     count2 = strlen(word);

//     for (int i = 0; i < count2; i++)
//     {
//         for (int j = 0; j < count1; j++)
//         {
//             if (word[i] == sen[j])
//             {
//                 store = j;
//                 while (i < count2)
//                 {
//                     if (word[i] == sen[j])
//                     {
//                         key++;
//                     }

//                     i++; //? **HERE i AND j BOTH ARE INCRESING SIMMUNTENOUSLY THAT MEANS WORD IS MATCHING CONTINOUSLY
//                     j++;
//                 }

//                 if (key == count2)
//                 {
//                     // printf("STORE: %d\n J:%d\n", store, j); //? J gives on more count because j is counted alrady at fsecond for loop then it alagin increamented count2 times so 1 more is because of second for loop
//                     printf("ENTERED WORD '%s' EXISTS IN STRING AT INDEX: %d\n", word, store);
//                     return (0);
//                 }
//             }
//         }
//     }
//     printf("YOUR WORD '%s' DOESNOT EXIST IN THIS STRING\n", word);
//     return (0);
// }

// ******************************************************************************************************************************
// **RIVISON**
// *DONE: ANKIT IS ABOY, HERE BOY IS ALSO SHOWN AS WORD, CHECK AFTER BEFORE WORD A BLANK THEN THATS WORD

#include <stdio.h>
#include <string.h>

int main()
{
    char text[20];
    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", text);

    char word[10];
    printf("ENTER YOUR WORD TO FIND:\n");
    scanf("%[^\n]%*c", word);

    int count_word = strlen(word);
    int count_text = strlen(text);

    for (int j = 0; j < count_text; j++)
    {
        if (word[0] == text[j])
        {
            int key = 0;
            int res_j = j;

            for (int k = 0; k < count_word; k++)
            {

                if (word[k] == text[j])
                {
                    key++;
                    j++;
                }
            }
            if (key == count_word && text[res_j - 1] == ' ' && (text[j] == ' ' || text[j] == '\0'))
            //* this is for finding excat word: he is ankit: word=ankit, not nkit
            
            {
                printf("%s EXIST AT INDEX text[%d]", word, res_j);
                return (0);
            }

            j = res_j;
        }
    }

    printf("%s DOESNOT EXIST IN THIS STRING\n", word);
    return (0);
}
