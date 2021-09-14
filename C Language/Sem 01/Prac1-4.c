// Practical 1.4: Sonu ranked mth from the top and nth from the bottom in a class. How many students are there in the class?

#include <stdio.h>
int main()
{
   int m,n,total_stud;

   printf("ENTER THE POSITION OF SONU FROM THE TOP:\n");
   scanf("%d",&m);

   printf("ENTER THE POSITION OF SONU FROM BASE:\n");
   scanf("%d", &n);

   // total_stud=(m-1)+1+(n-1);
   total_stud=m+n-1;

   printf("THE TOTAL NUMBER OF STUDENTS IS : %d\n",total_stud);
   return 0;

}