//***************************************************************************************************************************************
//**Find lowest frequency character in a string.
//**ALSO PRINT EQUAL OCCURED CHARACTERS
//**04.03.2021
//TODO: IMPORTANT

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char word[20];
//     int count, equal, temp, flag, key, index[20];
//     temp = -1;
//     flag = equal = 1;

//     printf("ENTER YOUR WORD:\n");
//     scanf("%[^\n]%*c", word);

//     count = strlen(word);

//     for (int i = 0; i < count; i++)
//     {
//         key = 1;
//         for (int j = i + 1; j < count; j++)
//         {
//             if (word[i] == word[j] && !isblank(word[i]) && !isblank(word[j]))
//             {
//                 index[j] = -1;
//                 key++;
//             }

//             if (isblank(word[i]))
//             {
//                 index[i] = -1;

//             }

//             if (isblank(word[j]))
//             {
//                 index[j]= -1;

//             }
//         }
//         if (index[i] != -1)
//         {
//             index[i] = key;
//         }
//     }

//     for (int i = 0; i < count; i++)
//     {
//         if (index[0] > index[i] && index[i] != -1)
//         {
//             index[0] = index[i];
//             index[i] = -1;
//             temp = i;
//         }
//     }

//     for (int i = 1; i < count; i++)
//     {
//         if (index[0] == index[i])
//         {
//             equal++;
//             flag=i;
//         }
//     }

//      if (equal > 1)
//     {

//         if (temp != -1)
//             printf("THERE ARE %d CHARACTERS HAVING SAME AND LOWEST OCCURENCE, TWO ARE THEM %c & %c AND OCCURED %d TIMES:\n", equal, word[flag], word[temp], index[0]);

//         else
//             printf("THERE ARE %d CHARACTERS HAVING SAME AND LOWEST OCCURENCE, TWO  ARE THEM %c & %c AND OCCURED %d TIMES:\n", equal, word[flag], word[0], index[0]);
//     }

//     else
//     {
//     if (temp != -1)
//     {
//         printf("THE MOST LOWEST OCCURED CHARACTER IS %c AND OCCURED %d TIMES:\n", word[temp], index[0]);
//     }
//     else
//         printf("THE MOST LOWSET OCCURED CHARACTER IS %c AND OCCURED %d TIMES:\n", word[0], index[0]);
//     }
//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    char text[20];
    printf("ENTER YOUR STRING:\n");
    scanf("%[^\n]%*c", text);

    int data[20] = {'0'};
    int count = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        int key = 1;
        for (int j = i + 1; text[j] != '\0'; j++)
        {
            if (text[i] == text[j] && data[i] != -1)
            {
                key++;
                data[j] = -1;
            }
        }

        if (text[i] == ' ')
        {
            data[i] = -1;
        }

        if (data[i] != -1)
        {
            data[i] = key;
        }

        count++;
    }

    int first = 1, min, index;
    for (int i = 0; i < count; i++)
    {
        if (data[i] != 0 && data[i] != -1)
        {
            if (first == 1)
            {
                min = data[i];
                index = i;

                first = 0;
            }

            if (min > data[i])
            {
                min = data[i];
                index = i;
            }
        }
    }

    int index2;
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        if (min == data[i])
        {
            index2 = i;
            total++;
        }
    }

    if (total != 0)
    {
        printf("MINIMUM OCCURENCE: %d\n", min);
        printf("TOTAL CHARACTER HAVE SAME AND MINIMUM OCCURENCE: %d\n", total);
        printf("TWO OF THEM CHARACTER HAVING MINIMUM OCCURENCE: %c AND %c\n", text[index], text[index2]);
    }
    else
        printf("%c OCCURED MINIMUM TIMES OF TOTAL OCCURENCE: %d", text[index], min);
    return (0);
}