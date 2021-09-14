// Practical 1.3: A train can travel 50% faster than a car. Both start from point A at the same time and reach point B, 75 kms away from A at the same time. 
// On the way, however, the train lost about 12.5 minutes while stopping at the stations. Write a C program to compute the speed of car.

#include <stdio.h>
int main()
{
float sp_train,sp_car,dist_covered,time_lapse,new_speed;
// sp_train=(50*sp_car)/100;
printf("ENTER THE VALUE OF DISTANCE COVERED:\n");
scanf("%f",&dist_covered);

printf("ENTER THE TOTAL TIME LAPSED ON STATIONS:\n");
scanf("%f",&time_lapse);

new_speed=dist_covered/time_lapse*60;
sp_car=new_speed*(2/3);  //DOUBT HERE IN MATHEMATICS

printf("THE SPEED OF CAR IS : %f\n", sp_car);

return 0;

}