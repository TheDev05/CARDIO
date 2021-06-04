//**********FIND AVERAGE OF SET OF ELEMENTS IN AN ARRAY USING CALLING FUNCTION************

#include <stdio.h>
float avg(int data[]);

int main()
{
    int num[5];
    float average;

    printf("ENTER 5 NUMBERS :\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    average = avg(num);
    printf("THE AVERAGE OF INPUTTED NO IS %.2f\n", average);

    return (0);
}

float avg(int data[])
{
    int sum = 0;
    float avg;

    for (int i = 0; i < 5; i++)
    {
        sum += (float)data[i];
    }
    avg = (float)sum / 5;
    return (avg);
}