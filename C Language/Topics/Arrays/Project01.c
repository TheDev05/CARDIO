//C Program To Insert An Element Desired or Specific Position In An Array (REPLACING)

// #include <stdio.h>
// int main()
// {
//     int array[50];
//     int count, num, pos;

//     printf("ENTER HOW LONG YOUR NUMBER IS:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR TOTAL NUMBER\n");

//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &array[i]);
//     }

//     printf("ENTER NUMBER AND THE POSITION YOU WANT TO PLACE YOUR DESIRE NUMBER:\n");
//     scanf("%d %d", &num, &pos);

//     array[pos - 1] = num;

//     printf("THE TOTAL REQUIRED NUMBER IS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("  %d", array[i]);
//     }

//     return (0);
// }

//*********************************************************************************************************************************************
//?<1st rivison|17.02.2021>

// #include <stdio.h>
// int main()
// {
//     int arr[10], count, pos, insert;
//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("ENTER THE THE NUMBER YOU WANT YTO INSERT:\n");
//     scanf("%d", &insert);

//     printf("ENTER THEPLACE AT WHICH THIS WILL INSERTED:\n");
//     scanf("%d", &pos);

//     pos = pos - 1;

//     arr[pos] = insert;

//     printf("FINAL VALUE:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf(" %d", arr[i]);
//     }
//     return (0);
// }

//***********************************************************************************************************************************************
//**RIVISON**

// #include <stdio.h>

// int main()
// {
//     int num[20], count;
//     int pos, insert;

//     printf("ENTER INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR INPUT:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     printf("ENTER DESIRED POSITION YOU WANNA INSERT YOUR ELEMNT:\n");
//     scanf("%d", &pos);

//     printf("ENTER THE NUMBER YOU WANNA INSERT:\n");
//     scanf("%d", &insert);

//     pos = pos - 1;
//     num[pos] = insert;

//     printf("AFTER INSERTING, OUTPUT:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d ", num[i]);
//     }
//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
    int count;
    printf("ENTER INPUT LIMIT:\n");
    scanf("%d", &count);

    int num[count];
    int pos, key;

    printf("ENTER ARRAY ELEMTS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("ENTER ELEMT WHICH IS TO BE PUSHED:\n");
    scanf("%d", &key);

    printf("ENTER SPECIFIC POSITION TO PUT %d\n", key);
    scanf("%d", &pos);

    pos = pos - 1;
    num[pos] = key;

    printf("REQUIRED ARRAY ELEMSTS:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", num[i]);
    }

    return (0);
}