//C Program To Delete 2 Element From Array At Desired Or Specific Position
//REMOVING TWO DIGITS

// #include <stdio.h>
// int main()
// {
//     int array[20], count, pos1, pos2, num1, num2;

//     printf("ENTER YOUR INPUT COUNT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &array[i]);
//     }

//     printf("ENTER THE POSITIONS YOU WANT TO DELETE:\n");
//     scanf("%d %d", &pos1, &pos2);

//     num1 = pos1 - 1;
//     num2 = pos2 - 1;

//     while (num1 < count)
//     {
//         array[num1] = array[num1 + 1];
//         num1++;
//     }

//     num2 = num2 - 1; //*wE HAVE TO MINUS AGAIN BCOZ IN FIRST WHILE LOOP EXC SIZE OF ARRAY DEC TO 1 SO POS VARY THEN WE ALSO HAVE TO VARY ONE TOO

//     while (num2 < count)
//     {
//         array[num2] = array[num2 + 1];
//         num2++;
//     }

//     count = count - 2;
//     printf("YOUR NUMBER AFTER SUCCESFULL DELETION IS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d", array[i]);
//     }

//     return (0);
// }
//**************************************************************************************************************************************
//**REVISION|19.02.2021

// #include <stdio.h>
// int main()
// {
//     int num[20], count, pos1, pos2, index1, index2;

//     printf("ENTER YOUR INPUT LIMIT:\n");
//         scanf("%d", &count);

//     printf("ENTER YOUR NUMBER:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     printf("ENTER THE FIRST AND SECOND POSITIONS OF NUMBERS YOU WANT TO REMOVE:\n");
//     scanf("%d %d", &pos1, &pos2);

//     index1 = pos1 - 1;
//     index2 = pos2 - 1;

//     while (index1 < count)
//     {
//         num[index1] = num[index1 + 1];
//         index1++;
//     }
//     count--;
//     index2--;

//     while (index2 < count)
//     {
//         num[index2] = num[index2 + 1];
//         index2++;
//     }
//     count--;

//     printf("YOUR NUMBER AFTER DELETION IS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d", num[i]);
//     }

//     return (0);
// }

//***********************************************************************************************************************************************
//**RIVISON**

#include <stdio.h>

int main()
{
    int num[20], count;

    printf("ENTER INPUT LIMIT:\n");
    scanf("%d", &count);

    printf("ENTER YOUR NUMBERS:\n");
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num[i]);
    }

    int pos1, pos2;

    printf("ENTER TWO POSITION YOU WANNA REMOVE ELEMENTS:\n");
    scanf("%d %d", &pos1, &pos2);

    pos1 = pos1 - 1;
    pos2 = pos2 - 2;

    while (pos1 < count)
    {
        num[pos1] = num[pos1 + 1];
        pos1++;
    }
    count--;

    while (pos2 < count)
    {
        num[pos2] = num[pos2 + 1];
        pos2++;
    }
    count--;

    printf("AFTER REMOVAL OF ELEMNTS:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", num[i]);
    }
    return (0);
}