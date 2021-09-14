// Practical 2.3: Write a C program to find out year in which Mr. Kavi was born from the following information.

// a)    Kavi is m years younger than his mother.

// b)    Kavi’s brother who born in year y(1900<=y<=2019) is n years younger to his mother

// c)     If Kavi’s brother is reading in class r then On the basis of your common sense also predict

//       In which class Kavi is reading?

#include <stdio.h>
int main()
{
  float m,n;
  int r,y,diff_in_year,year_of_birth,class,class1;
  printf("ENTER THE VALUE OF m:\n");
  scanf("%f",&m);
  printf("ENTER THE VALUE OF n:\n");
  scanf("%f",&n);

  printf("ENTER THE STANDARD IN WHICH KAVI'S BROTHER STUDY:\n");
  scanf("%d",&class1);

  printf("ENTER THE YEAR IN WHICH KAVI'S BROTHER WAS BORN:\n");
  scanf("%d", &y);

  diff_in_year=n-m;
  year_of_birth=y-diff_in_year;
  
  printf("KAVI WAS BORN IN %d\n", year_of_birth);
  
  //predecting standard by increasing or adding young brother standard with year difference
  

  if((class1>=1)||(class1<=12))
   {
       class=class1+diff_in_year;
        if(class<1)
        printf("KAVI IS KINDER GARDEN\n");

          else
          {
             if(class>12)
              printf("KAVI IS IN HIGHER EDUCATION CLASS CANNT BE PREDICTED\n");

            else
            {
               if((class>=1)||(class<=12))
             
               printf("KAVI IS IN CLASS %d",class);
            }
          }
          
    }
  else
  
      printf("THE STANDARD IS OUT OF LIMIT OR CANNT BE PREDICTED\nWE ONLY PREDICT IF STUDENT IS IN BETWEEN CLASS 1 TO 12\n");
  
return 0;
}

