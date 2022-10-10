//**********FIND AVERAGE OF SET OF ELEMENTS IN AN ARRAY USING CALLING FUNCTION************

// #include <stdio.h>
// float avg(int data[]);

// int main()
// {
//     int num[5];
//     float average;

//     printf("ENTER 5 NUMBERS :\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &num[i]);
//     }

//     average = avg(num);
//     printf("THE AVERAGE OF INPUTTED NO IS %.2f\n", average);

//     return (0);
// }

// float avg(int data[])
// {
//     int sum = 0;
//     float avg;

//     for (int i = 0; i < 5; i++)
//     {
//         sum += (float)data[i];
//     }
//     avg = (float)sum / 5;
//     return (avg);
// }

// *********************************************************************************************************************************************
// **RIVISON**

// #include <stdio.h>
// int main()
// {
//     int count;
//     printf("ENTER INPUT LIMIT:\n");
//     scanf("%d", &count);

//     int num[count], sum = 0;
//     printf("ENTER ARRAY ELEMSTS:\n");
//     for (int i = 0; i < count; i++)
//     {
//         scanf("%d", &num[i]);
//         sum += num[i];
//     }

//     printf("AVERAGE: %f", (float)sum / count);
//     return (0);
// }

#include <stdio.h>

float avg(int *p, int count)
{
    int sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += *(p + i);
    }
    return ((float)sum / count);
}

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

    printf("AVERAGE: %f\n", avg(num, count));
    return (0);
}