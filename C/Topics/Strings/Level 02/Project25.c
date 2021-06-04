//** Trim both leading and trailing white space characters from a given string.
//** 14.03.21

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char sen[20];
//     int count, key_lead, key_trail,j,res_j;
//     key_lead = key_trail = 0;

//     printf("ENTER YOUR SENTENCE:\n");
//     scanf("%[^\n]%*c", sen);

//     count = strlen(sen);

//     for (int i = 0; i < count; i++) //? Counting leading spaces
//     {
//         if (!isblank(sen[i]))
//         {
//             break;
//         }

//         else
//         {
//             key_lead++;
//         }
//     }

//     for (int i = 0; i < key_lead; i++) //? removing leading spaces
//     {
//         j = 0;
//         while (j < count)
//         {
//             sen[j] = sen[j + 1];
//             j++;
//         }
//         count--;
//     }

//     for (int i = count - 1; i >= 0; i--)//? counting trailing spaces
//     {
//         if (!isblank(sen[i]))
//         {
//             break;
//         }

//         else
//         {
//             key_trail++;
//             j=i;
//             res_j=j;
//         }
//     }

//      for (int i = 0; i < key_trail; i++)//? removing trailing spaces
//     {
//         j = res_j;
//         while (j < count)
//         {
//             sen[j] = sen[j + 1];
//             j++;
//         }
//         count--;

//     }
//     printf("SEN:\n%spp\n", sen);
//     return (0);
// }

//  *********************************************************************************************************************************************
//  Trim both leading and trailing white space characters from a given string.
//  **REVISION|21.03.21

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sen[20];
    int count, key, i, res_i, index;
    i = res_i = 0;

    printf("ENTER YOUR SENTENCE:\n");
    scanf("%[^\n]%*c", sen);

    count = strlen(sen);

    key = 0;

    while (isblank(sen[i])) //? couting blank from strting
    {
        key++;
        i++;
    }

    i = res_i;

    for (int j = 0; j < key; j++) //? removing blank from starting
    {
        while (i < count)
        {
            sen[i] = sen[i + 1];
            i++;
        }
        count--;
        i = res_i;
    }

    key = 0;
    i = count - 1;

    while (isblank(sen[i])) //? counting blank from end
    {
        key++;
        i--;
    }

    i = i + 1;
    res_i = i;

    for (int j = 0; j < key; j++) //?  rmoving blank from end
    {
        while (i < count)
        {
            sen[i] = sen[i + 1];
            i++;
        }
        count--;
        i = res_i;
    }

    printf("SENTENCE:%s\n", sen);
    return (0);
}