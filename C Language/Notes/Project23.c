//PROGRAM TO FIND MEAN OF 5 NUMBERS

#include <stdio.h>
int main()
{
    int number[5],sum;
    float mean;
    sum=0;

    printf("ENTER FIVE NUMBERS:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &number[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        
        sum+=number[i];
    }
    
    mean=sum/5;
    printf("THE MEAN OF 5 INPUTTED NUMBER IS %.2f", mean);

    return 0;    
}