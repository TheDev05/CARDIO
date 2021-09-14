#include <stdio.h>
#define PI 3.14
int main()
{
int radius;
float area;
printf("enter the radius:\n", radius);
scanf("%d",&radius);
area=PI*radius*radius;
printf("area of circle is %f\n",area);
return area;
}
