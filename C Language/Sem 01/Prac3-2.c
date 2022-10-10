// Practical 3.2: Write a menu driven program that allow the user to perform any one of the following operations based on the input given by user

// i       Check number is even or odd

// ii      Check number is positive or negative

// iii     Printing square of the number

// iv     Printing square root of the number (use math.h)

// Use switch statement for a menu driven program. Also, use validation checks wherever necessary.

#include <stdio.h>
#include <math.h>

int main()
{

int option,option1,option2,option3,option4,squaring;
float rooting;
printf("THIS IS MENU DRIVEN SYSTEM, CHOOSE ANY NO BETWEEN 1 TO 4\n ***ENTER 1 FOR CHECKING NO IS EVEN OR ODD***\n ***ENTER 2 TO CHECK EITHER NO IS POSITIVE OR NEGATIVE***\n ***ENTER 3 TO GET SQUARE OF A NUMBER***\n ***ENTER 4 FOR GET SQUARE ROOT OF A NO***\n");
scanf("%d", &option);

switch(option)
   {
    case 1: printf("ENTER YOUR NUMBER\n");
            scanf("%d", &option1);
            if(2%option1==0)
            printf("YOUR NUMBER IS EVEN");
            else
            printf("YOUR NUMBER IS ODD");
            break;
            
    case 2:printf("ENTER YOUR NUMBER\n");
         scanf("%d", &option2);
         if(option2>=0)
         printf("YOUR NUMBER IS POSITIVE");
         else
         printf("YOUR NUMBER IS NEGETIVE");
         break;
         
    case 3:printf("ENTER YOUR NUMBER\n");
           scanf("%d",&option3);
           squaring=option3*option3;
           printf("SQUARE OF YOUR NO IS %d", squaring);
           break;  

    case 4: printf("ENTER YOUR NUMBER\n");
            scanf("%d",&option4);
            rooting=sqrt(option4);
            printf("SQUARE ROOT OF YOUR NUMBER IS %.2f", rooting);
            break;
    default : printf("INVALID ENTRY,PLEASE CHOOSE CORRECT OPTION");

   }

return 0;
}   

