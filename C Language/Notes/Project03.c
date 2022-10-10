//*****FINDING THE ROOTS OF QUADRATIC EQUATION BY TAKING CONSTANT VALUE FROM USER******
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float roots1, roots2, disc,r, d;

    printf("Enter the value of constant a then b then c:\n");
    scanf("%d %d %d", &a, &b, &c);
    disc=(b*b)-(4*a*c);
    d=sqrt(disc);
    if(disc>0)
    {
    printf("\nRoots are real\n");
    r=-b+d/(2*a);
    printf("Roots are %f", r);
    }
    else
    {
        if(disc==0)
        {
        printf("Roots are equal\n");
        r=-b/2*a;
        printf("Roots are %f", r);
        }

        else
        printf("Roots are imaginory");

    }
    

return 0;


}