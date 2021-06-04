//READING THE ARRAY AND PRINTING THR ARRAY 
#include <stdio.h>
int main()
{
    int array[5];
    int count =0;
    
    printf("ENTER FIVE INTEGER NUMBERS:\n");

    for (int i = 0; i < 5; i++)
    {
     scanf("%d", &array[i]);    
    }

    for (int i = 0; i < 5; i++)
    {
        // printf("THE %d ENTERED NUMBER IS %d\n", ++count,array[i]);
        printf("THE VALUE OF array[%d] IS %d\n",i,array[i]);
    }
    
return 0;    
}