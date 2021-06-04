//***Add two complex numbers by passing structures to a function

#include <stdio.h>


typedef struct
{
    float real;
    float imag;
} complex;

complex num1, num2;

complex add(complex, complex);

int main()
{
    complex store;

    printf("ENTER REAL PART THEN IMAGINARY PART OF FIRST NUMBER RESPECTIVELY:\n");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("ENTER REL PART THEN IMAGIARY PART OF SECOND NUMBER RESPECTIVELY:\n");
    scanf("%f %f", &num2.real, &num2.imag);

    store=add(num1,num2); //? num1 means its total content that is real and imag of num1 and num2 as well...bcoz struct is accepting by add() function..and also returning structure

    printf("SUM: %.2f + i%.2f", store.real,store.imag);
    printf("%f",num1.real);
    return (0);
}

complex add(complex a,complex b)//? here we passing struct variable
{
    

    complex temp;

    temp.real = a.real+b.real;
    temp.imag=a.imag+b.imag; 

    return (temp);
}