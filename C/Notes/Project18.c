//*******PRACTICE OF ARRAYS********
//*******MEAN OF 05 NUMBERS********

#include <stdio.h>
int main()
{
 int number[5];
 int i,sum;
 sum=0;

 printf("ENTER 5 NUMBERS");

 for  (i = 0; i < 5; i++)

 {
    scanf("%d", &number[i]);
 }

 for (i = 0; i < 5; i++)
 {
    sum+=number[i];
    
 }
  printf("THE SUM OF ENTERED 5 NO IS %d", sum);
  return 0; 
 
}