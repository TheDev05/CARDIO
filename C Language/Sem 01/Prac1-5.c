// Practical 1.5: A can do a piece of work in 8 days. B can do the same work in 14 days. 
// Write a program to calculate and print the number of days to be taken to complete the work if A and B work together.

#include <stdio.h>
int main()
{
    int tm_of_a,tm_of_b,sum,product;
    float result,total_tm;

    printf("ENTER THE NO OF DAYS TAKEN BY A:\n");
    scanf("%d",&tm_of_a);

    printf("ENTER THE NO OF DAYS TAKEN BY B :\n");
    scanf("%d",&tm_of_b);

    sum=(tm_of_a+tm_of_b);        //FOR EASE OF EASIER CALCULATIONS
    product=(tm_of_a*tm_of_b);

    result=(float)sum/sum1;  //operation between int and int value leads int but we want float value because divide may result float values some times
    total_tm=1/sum2;  //operations including float value always yeilds float value

    printf("THE TOTAL TIME TAKEN BY A AND B TOGRTHER IS %.2f\n",total_tm);
    
    return 0;
    
}