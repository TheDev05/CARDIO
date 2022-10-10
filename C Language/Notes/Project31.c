//READING A LINE OF A TEXT AND COUNT THE NO OF UPPERCASE LETTERS

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char text[20];
//     int count, key;
//     key = 0;

//     printf("ENTER YOUR TEXT:\n");
//     fgets(text, 20, stdin);

//     count = strlen(text);

//     for (int i = 0; i < count; i++)
//     {
//         if (isupper(text[i]))
//         {
//             key++;
//         }
//     }
//     if (key > 0)
//     {
//         printf("THE UPPERCASE LETTERS IS %d", key);
//     }
//     else
//     {
//         printf("NO UPPERCASE LETTER IS FOUNDED");
//     }

//     return (0);
// }

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main()
// {
//     char text[21];
//     int count,flag;
//     flag=0 ;

//     printf("ENTER YOUR TEXT:\n");
//     gets(text);

//     count=strlen(text);

//     for (int i = 0; i < count; i++)
//     {
//         if (isupper(text[i]))
//         {
//             flag++;
//         }

//     }

//     printf("THE TOTAL NUMBER OF UPPERCASE LETTER IS %d",flag);
// return 0;

// }

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sen[20];

    printf("ENTER YOUR STRING: \n");
    fgets(sen, 20, stdin);

    int upper = 0, lower = 0;
    int count;
    count = strlen(sen);

    for (int i = 0; i < count; i++)
    {
        if (isupper(sen[i]))
        {
            upper++;
        }
        if (islower(sen[i]))
        {
            lower++;
        }
    }

    printf("UPPER: %d\nLOWER: %d\n", upper, lower);
    return (0);
}