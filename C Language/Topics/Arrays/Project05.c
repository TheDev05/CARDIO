//C Program To Delete Element From Array At Desired Or Specific Position
//******REVISE*******

// #include <stdio.h>

// int main()
// {
//     int array[20], count, pos, num;

//     printf("ENTER YOUR INPUT COUNT:\n");
//     scanf("%d", &count);

//     printf("ENTER YOUR NUMBERS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &array[i]);
//     }

//     printf("ENTER THE POSITION YOU WANT TO DELETE:\n");
//     scanf("%d", &pos);

//     num = pos - 1;
//     while (num < count)
//     {
//         array[num] = array[num + 1];
//         num++;
//     }

//     count--;
//     printf("YOU NUMBER AFTER DELETION IS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         printf("%d", array[i]);
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
    printf("ENTER POISTION OF ELEMNET U WANNA TO REMOVE:\n");
    scanf("%d", &pos);

    pos = pos - 1;
    while (pos < count)
    {
        num[pos] = num[pos + 1];
        pos++;
    }
    count--;

    printf("AFTER REMOVAL ARRAY BECAME:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", num[i]);
    }
    return (0);
}