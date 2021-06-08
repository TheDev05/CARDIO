//** Program to add two distances in the inch-feet system
//** https://www.programiz.com/c-programming/examples/inch-feet-structure

// #include <stdio.h>

// int main()
// {
//     typedef struct
//     {
//         int feet;
//         float inch;
//     } distance;

//     distance place1, place2;

//     printf("ENTER FEET OF FIRST DISTANCE:\n");
//     scanf("%d", &place1.feet);

//     printf("ENTER INCGES OF FIRST DISTANCE:\n");
//     scanf("%f", &place1.inch);

//     printf("ENTER FEET OF SECOND DISTANCE:\n");
//     scanf("%d", &place2.feet);

//     printf("ENTER INCHES OF SECOND DISTANCE:\n");
//     scanf("%f", &place2.inch);

//     distance total;

//     total.feet = place1.feet + place2.feet;
//     total.inch = place1.inch + place2.inch;

//     printf("TOTAL : %d' %.2f''\n", total.feet,total.inch);

//     return (0);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>

struct data
{
    int feet;
    int inch;
};

int main()
{
    struct data len1, len2;

    printf("ENTER FIRST LENGTH FEETS THEN INCHES:\n");
    scanf("%d %d", &len1.feet, &len1.inch);

    printf("ENTER SECOND LENGTH FEETS THEN INCHES:\n");
    scanf("%d %d", &len2.feet, &len2.inch);

    printf("TOTAL LENGTH:\n");
    printf("FEET: %d\nINCHES: %d\n", len1.feet + len2.feet, len1.inch + len2.inch);

    return (0);
}