// Practical 1.2: A cube having a side of a cm is painted red on all the faces and then cut into smaller cubes of b cm each.
//  Write a program to find the total number of smaller cubes so obtained.

#include <stdio.h>
int main()
{

int length_of_cube,length_of_cutting_cube,n,total_cubes;

printf("ENTER THE LENGTH OF SIDE OF CUBE:\n");
scanf("%d",&length_of_cube);

printf("ENTER THE SIZE OF SIDE OF CUBE OF WHICH YOU WANT CUT:\n");
scanf("%d",&length_of_cutting_cube);

n=length_of_cube/length_of_cutting_cube;
total_cubes=n*n*n;

printf("THE TOTAL NO OF CUTTED CUBES: %td\n",total_cubes);
return 0;

}
