//***Add two complex numbers by passing structures to a function

// #include <stdio.h>

// typedef struct
// {
//     float real;
//     float imag;
// } complex;

// complex num1, num2;

// complex add(complex, complex);

// int main()
// {
//     complex store;

//     printf("ENTER REAL PART THEN IMAGINARY PART OF FIRST NUMBER RESPECTIVELY:\n");
//     scanf("%f %f", &num1.real, &num1.imag);

//     printf("ENTER REL PART THEN IMAGIARY PART OF SECOND NUMBER RESPECTIVELY:\n");
//     scanf("%f %f", &num2.real, &num2.imag);

//     store=add(num1,num2); //? num1 means its total content that is real and imag of num1 and num2 as well...bcoz struct is accepting by add() function..and also returning structure

//     printf("SUM: %.2f + i%.2f", store.real,store.imag);
//     printf("%f",num1.real);
//     return (0);
// }

// complex add(complex a,complex b)//? here we passing struct variable
// {

//     complex temp;

//     temp.real = a.real+b.real;
//     temp.imag=a.imag+b.imag;

//     return (temp);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

struct data
{
    int real;
    int img;
};

struct data add(struct data com1, struct data com2)
{
    struct data temp;
    temp.real = com1.real + com2.real;
    temp.img = com1.img + com2.img;

    return (temp);
}

int main()
{
    struct data com1, com2, added_com;

    printf("ENTER FIRST COMPLEX REAL THEN IMAGINARY PART: \n");
    scanf("%d %d", &com1.real, &com1.img);

    printf("ENTER SECOND COMPLEX REAL THEN IMAGINARY PART:\n");
    scanf("%d %d", &com2.real, &com2.img);

    added_com = add(com1, com2);

    printf("FINAL COMPLEX: %d+i%d\n", added_com.real, added_com.img);
    return (0);
}