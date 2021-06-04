//CHECKING TWO SET OF INPUTTED NUMBER IS EQUAL OR NOT
//USING ARRAY OPERATIONS

#include <stdio.h>
int main()
{
    int num, count, myarr1[20], myarr2[20], key;
    key = 0;

    printf("ENTER YOUR FIRST INPUT LIMIT:\n");
    scanf("%d", &count);

    printf("ENTER YOUR NUMBERS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &myarr1[i]);
    }

    printf("ENTER YOUR NUMBERS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &myarr2[i]);
    }

    for (int i = 0; i < count; i++)
    {
        if (myarr1[i] == myarr2[i] && (myarr1[i] != '\0') && (myarr2[i] != '\0'))
        {
            key++;
        }
        else
        {
            printf("ENTERED NUMBER IS NOT EQUAL:\n");
            return (0);
        }
    }

    if (key == count)
    {
        printf("ENTERED TWO NUMBER IS EQUAL\n");
    }

    return (0);
}

// #include<stdio.h>
// int main()
// {
//     int array1[5],array2[5];
//     int same;

//     printf("ENTER FIRST SET NUMBERS:\n");

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &array1[i]);
//     }

//     printf("ENTER SECOND SET NUMBERS:\n");
//      for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &array2[i]);
//     }


//     for (int i = 0; i < 5; i++)
//     {
//         if (array1[i]==array2[i]&&array1[i]!='\0'&&array2[i]!='\0') //IMPORTANT LAST TWO CONDITIONS IF NUMBER IS 123 AND 12345 THEN THIS COND IS USED
//         {
//             same=1;
//         }

//         else
//         {
//             printf("ENTERED SET IS NOT EQUAL\n");
//           return 0;
//         }
//     }

// if (same==1)
// {
//     printf("THE TWO INPUTTED SET IS SAME");
// }

// return 0;    
// }