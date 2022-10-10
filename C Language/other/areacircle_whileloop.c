#include <stdio.h>
#define PI 3.14
int main()
{
int radius;
int p;
float area;
p=1;
while(p<5)
{
printf("enter the radius:\n", radius);
scanf("%d",&radius);
area=PI*radius*radius;
printf("area of circle is %f\n",area);
p++;
}
return 0;
}
