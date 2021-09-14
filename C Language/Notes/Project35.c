//**********FINDING OF AVERAGE OF 5 NUMBERS, BY FUNCTION CALLING**********

#include <stdio.h>
float avg(int p, int q, int r, int s, int t, int count);

int main()
{
    int a, b, c, d, e, total;
    float average;
    
    total = 5;

    printf("ENTER 5 NUMBERS:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    average = avg(a, b, c, d, e, total);
    printf("THE AVERAGE OF 5 NUMBERS IS %f :/n", average);

    return (0);
}

float avg(p, q, r, s, t, count) 
int p, q, r, s, t, count;
{

    float average;
    average = (float)(p + q + r + s + t) / (float)count;
    return (average);
}