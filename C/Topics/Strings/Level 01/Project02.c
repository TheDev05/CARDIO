// //**A String Is an Anagram or Not
// //**21.02.2021
// //* https://stackoverflow.com/questions/41572713/string-length-with-fgets-function-in-c
// //* https://cboard.cprogramming.com/c-programming/177458-strlen-adds-plus1-length-when-using-fgets.html
// //* https://cboard.cprogramming.com/c-programming/150889-fgets-strlen-confusion.html

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char word1[20], word2[20];
//     int key = 0, count1, count2;

//     printf("ENTER FIRST WORD:\n");
//     // fgets(word1, 20, stdin); //? ***WE CANNT USE FGETS WITH STRLEN IT GIVES WRONG COUNT coz it always auto end with null so it also counts yiur enter key then it puts null, BUT OKAY WITH GETS AND SCAN[^]
//     scanf("%[^\n]%*c", &word1);

//     printf("ENTER SECOND WORD:\n");
//     // fgets(word2, 20, stdin);
//     scanf("%[^\n]%*c", &word2); //? ***WE CANNT USE FGETS WITH STRLEN IT GIVES WRONG COUNT BUT OKAY WITH GETS AND SCAN[^]

//     count1 = strlen(word1);
//     count2 = strlen(word2);

//     // printf("count1: %d\n count2: %d", count1, count2);

//     for (int i = 0; i < count1; i++)
//     {
//         for (int j = 0; j < count2; j++)
//         {
//             if (word1[i] == word2[j])
//             {
//                 key++;
//             }
//         }
//     }

//     printf("%d\n", key); //!!! **DONT KNOW WHY BUT AFTER UNCOMMENTING IT THE COUNT OF SECOND VALUE GIVE WRONG OUTPUTS

//     if (key == count2 || key == count1)
//     {
//         printf("\nWORD IS ANAGRAM\n");
//     }

//     else
//         printf("\nWORD IS NOT ANAGRAM\n");
//     return (0);
// }

//************************************************************************************************************************
//**RIVISON|23.02.2021

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char name1[20], name2[20];
//     int count1, count2, key;

//     key = 0;

//     printf("ENTER YOUR FIRST WORD:\n");
//     scanf("%[^\n]%*c", &name1);

//     printf("ENTER YOUR SECOND WORD:\n");
//     scanf("%[^\n]%*c", &name2);

//     count1 = strlen(name1);
//     count2 = strlen(name2);

//     for (int i = 0; i < count1; i++)
//     {
//         for (int j = 0; j < count2; j++)
//         {
//             if (name1[i] == name2[j])
//             {
//                 key++;
//             }

           
//         }
//     }

//     if (key == count1 || key == count2)
//     {
//         printf("WORD IS ANAGRAM\n");
//     }

//     else
//         printf("WORD IS NOT ANAGRAM\n");

//     return (0);
// }
