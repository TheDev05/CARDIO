// Practical 2.2: Inside the CPU, mathematical operations like addition, subtraction, multiplication and division are done in bit-level. To perform bit-level operations in C programming, bitwise operators are used. Apply the knowledge you gained while learning bitwise operators.

// Write a program to input two integers from user by using single scanf. Compute and display the value for a& b,

// a| b, a f b.

#include <stdio.h>

int main()
{

   int a,b;
    
    printf("ENTER THE VALUE OF A AND B:\n");
    scanf("%d %d", &a, &b);

    printf("THE BIT AND VALUE OF A AND B IS: %d\n", a&b);
    printf("THE BIT OR VALUE OF A AND B IS: %d\n", a|b);
    printf("THE BIT XOR VALUE OF A AND B IS: %d\n", a^b);

   return 0;

}