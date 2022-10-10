// ** Swap two numbers using pointers

// #include <stdio.h>
// void swap(int *, int *);

// int main()
// {
//     int a, b;

//     printf("ENTER VALUE OF A THEN B:\n");
//     scanf("%d %d", &a, &b);

//     printf("BEFORE SWAPPING BOTH VALUES A B= %d %d\n", a, b);

//     swap(&a, &b);

//     printf("AFTER SWAPPING BOTH VALUES A B= %d %d\n", a, b);
//     return (0);
// }

// void swap(int *p, int *q)
// {
//     int temp;
//     temp = *p;
//     *p = *q;
//     *q = temp;
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int num1, num2;
    printf("ENTER TWO NUMBERS:\n");
    scanf("%d %d", &num1, &num2);

    swap(&num1, &num2);

    printf("AFTER SWAPPING NUM1: %d AND NUM2: %d", num1, num2);
    return (0);
}
