//****COMPUTING AREA OF CIRCLE BY CALLING OTHER FUNCTION*****
#include <stdio.h>
// #include <math.lib>
#define PI 3.14

int main()
{
    float radius, area;
    float myfunction(float radius);
    printf("Enter radius:\n", radius);
    scanf("%f", &radius);

    area=myfunction(radius); //***NO NEED TO DECLARE TYPE OF ARGUMENTS HERE****
    printf("Area of circle is %.2f", area);
}

   float myfunction(float radius)
    {
        float a;
    a=PI*radius*radius;
    return a;
    }