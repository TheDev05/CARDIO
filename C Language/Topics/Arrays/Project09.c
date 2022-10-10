//*************C Program to Check String is a Palindrome(LEFT RIGHT WORDS SAME AS, MALYLAM) or Not***********

// #include <stdio.h>
// #include <string.h>
// #include <math.h>

// int main()
// {
//     char word[20];
//     int count, key, node, temp;
//     float div;
//     node = 0;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", &word);

//     count = strlen(word);

//     printf("count: %d", count);

//     key = count - 1;        //*ARRAY COUNT IS ONE LESS THAN ACTUAL COUNT
//     div = (float)key / 2;   //*IN 5 NUMBER WE CHECK 2 FIRST TO 2 LAST,SKIPPING MIDDLE, AND IN 4 OR EVEN WE CHECK 2 TO 2.
//     temp = (int)floor(div); //*ODD DIV BY EVEN YEILDS FLOAT WE CONVERT IT TO INT AND ALSO NEAREST LOWEST VALUE

//     for (int i = 0; i < temp; i++)
//     {
//         if (word[i] == word[key])
//         {
//             node++;
//             key--; //*CHANGES PLACE FROM LAST TO 2ND LAST AND SO ON
//         }
//     }

//     if (node == temp)
//     {
//         printf("YOUR WORD IS PALINDROME\n");
//     }
//     else
//     {
//         printf("YOUR WORD IS NOT PALINDROME\n");
//     }

//     return (0);
// }

//**************************************************************************************************************************************
//**REVISION|19.02.2021

// #include <stdio.h>
// #include <string.h>
// #include <math.h>

// int main()
// {
//     char num[20], count, flag;
//     float key;

//     // printf("ENTER YOUR INPUT LIMIT:\n");
//     // scanf("%d",&count");

//     printf("ENTER YOUR WORD:\n");
//     gets(num);

//     count = strlen(num);
//     flag = count - 1;

//     if (count % 2 == 0)
//     {
//         key = count / 2;

//         for (int i = 0; i < key; i++)
//         {
//             if (num[i] == num[flag - i])
//             {
//                 printf("WORD IS PALINDROME\n");
//                 return (0);
//             }
//         }
//     }

//     else
//     {
//         key = ceil((count / 2));
//         printf("%f", key);
//         for (int i = 0; i < key; i++)
//         {
//             if (num[i] == num[flag - i])
//             {
//                 printf("WORD IS PALINDROME\n");
//                 return (0);
//             }
//             else
//                 printf("WORD IS NOT PALIDROME\n");
//             return (0);
//         }
//     }

//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <string.h>

int main()
{
    char text[10];

    printf("ENTER YOUR STRING:\n");
    fgets(text, 20, stdin);

    int count = strlen(text);
    count--;

    for (int i = 0; i < count / 2; i++)
    {
        if (text[i] != text[count - 1 - i])
        {
            printf("STRING IS NOT PALINDROME\n");
            return (0);
        }
    }

    printf("STRING IS PALINDROME\n");
    return (0);
}