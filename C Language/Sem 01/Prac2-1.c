// Practical 2.1: Ram, Mohan and Sohan took loan of Rs. x, y and z on rate of interest r%, p%, q% for time t1, t2 and t3 years respectively. 
// Calculate simple interest they will pay and find who will pay the most using ternary operator?

#include <stdio.h>
int main()
{
    int x,y,z;
    float r,p,q,t1,t2,t3,SI_RAM,SI_MOHAN,SI_SOHAN;

    printf("ENTER THE TOTAL LOAN TAKEN BY RAM,MOHAN AND SOHAN:\n");
    scanf("%d %d %d",&x,&y,&z);

    printf("ENTER THE RATE OF INTEREST FOR RAM, MOHAN AND SOHAN OF THEIR LOANS:\n");
    scanf("%f %f %f",&r,&p,&q);

    printf("ENTER THE TIME LIMIT FOR RAM,MOHAN AND SOHAN:\n");
    scanf("%f %f %f",&t1,&t2,&t3);

    SI_RAM=(x*r*t1)/100;
    SI_MOHAN=(y*p*t2)/100;
    SI_SOHAN=(z*q*t3)/100;

    printf("RAM MOHN AND SOHAN WILL PAY SIMPLE INTEREST AS %f %f %f\n", SI_RAM,SI_MOHAN,SI_SOHAN);
    
    ((SI_RAM>SI_MOHAN&&SI_RAM>SI_SOHAN)?printf("RAM WILL PAY THE MOST OF SIMPLE INTEREST\n"):((SI_MOHAN>SI_RAM&&SI_MOHAN>SI_SOHAN)?printf("MOHAN WILL PAY THE MOST SIMPLE INTEREST"):printf("SOHAN WILL PAY THE MOST SIMPLE INTEREST")));

    return 0;

}