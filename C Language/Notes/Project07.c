//********PRACTICE SWITCH STATEMENT*******
//********CREATING PROGRAM FOR ONE CHANCE LOTTERY MACHINE*********

#include <stdio.h>

int main()
{
    int number;
    printf("WELCOME TO LOTTERY SHOP, TRY YOUR LUCK\n");
    printf("CHOOSE ANY NUMBER BETWEEN 1 TO 10\n");
    scanf("%d", &number);

    switch(number){

    case 5 :  printf("YOU WON A DETERGENT POWDER BAG OF 1 KG\n");
                  break;
                 
    case 7 :  printf("YOU WON A BLACK BALL PEN\n");
                  break;
                           
    case 9:  printf("HURRY, YOU WON A REFRIGETOR\n");
                  break;

    default :  printf("BAD LUCK, TRY YOUR LUCK NEXT TIME\n");
                break;

    }   

 printf("HOPE YOU ENJOY THIS GAME, TAKE YOUR TIME AND VISIT AGAIN");             
 return 0;             


}
