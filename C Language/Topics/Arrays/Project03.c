//C Program To Delete Element From Array At Desired Or Specific Position

// #include <stdio.h>

// int main()
// {
//     int arr[20], count, loc, pos;

//     printf("ENTER THR TOTAL DGITS IN YOUR INPUT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("ENTER THE POSITION OF ELEMENT YOU WANT TO DELETE:\n");
//     scanf("%d", &loc);

//     pos=loc-1; //THE ACTUATL COUNT OR USER COUNT IS DIFFER FROM THE POINT OF VIEW FROM ARRAY SIDE; USER COUNT FROM 1 BUT ARRAY 0.

//    while (pos<count)
//    {
//        arr[pos]=arr[pos+1]; //DELETING MEANS WE SLIIDES VALUE A POINT ABOVE THIS IS DONE FOR ALL VALUE WHICH BELONGS BELOW THE PARTICULAR CHOICE GIVEN BY USER!
//        pos++;
//    }

//    count--; //THIS MODIFIER IS NOT FOR WHILE LOOP BUT FOR NEXT ITERATION HERE FOR PRINTING VALUE
//             //COUNT VALUE O LENGTH OF ARRAY DEC AS ANY VALUE DELETES FROM THAT.

//     printf("YOUR REQUIRED SET OF INPUT AFTER DELETION IS :\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d", arr[i]);

//     }

//     return (0);
// }

//**************************************************************************************************************************************
//**REVISION|19.02.2021

// #include <stdio.h>
// int main()
// {
//     int num[20], count, pos, index;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }
//     printf("ENTER THE POSITION OF ELEMENT YOU WANT TO REMOVE:\n");
//     scanf("%d", &pos);

//     index = pos - 1;

//     for (int i = 0; i < count; i++)
//     {
//         if (num[i] == num[index])
//         {
//             while (index < count)
//             {
//                 num[index] = num[index + 1];
//                 index++;
//             }
//             count--;
//         }
//     }

//     // while (index < count)
//     // {
//     //     num[index] = num[index + 1];
//     //     index++;
//     // }

//     // count=count-1;

//     printf("YOUR NUMBER IS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d", num[i]);
//     }

//     return (0);
// }

//***********************************************************************************************************************************************
//**RIVISON**

// #include <stdio.h>

// int main()
// {
//     int num[20], count, pos;

//     printf("ENTER INPUT LIMIT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     printf("ENTER THE POSITION YOU WANNA REMOVE:\n");
//     scanf("%d", &pos);

//     pos = pos - 1;

//     while (pos < count)
//     {
//         num[pos] = num[pos + 1];
//         pos++;
//     }
//     count--;

//     printf("ELEMENTS AFTER REMOVAL:\n");
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
    printf("ENTER ARRAY ELEMTS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    int pos;
    printf("ENTER POISTION OF ELEMTS U WANNA REMOVE:\n");
    scanf("%d", &pos);

    pos = pos - 1;

    while (pos < count)
    {
        num[pos] = num[pos + 1];
        pos++;
    }
    count--;

    printf("REQUIRED ARRAY:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", num[i]);
    }

    return (0);
}