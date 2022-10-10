//PRACTICE OF LOOPS I.E WHILE AND FOR LOOPS FOR SUM OF 5 NOS, USER INPUT'S
//HERE WE RE GOING TO USE WHILE LOOP

#include <stdio.h>
int main()
{
   int sum, i, num;
   sum = 0;
   i = 1;

   printf("ENTER FIVE NUMBER:\n");
   while (i <= 5)
   {
      scanf("%d", &num);
      sum += num;
      i++;
   }

   printf("THE SUM IS %d", sum);
   return 0;
}


