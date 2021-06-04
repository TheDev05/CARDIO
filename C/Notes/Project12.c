//FINDING SUM OF 10 NUMBERS BY USING LOOP
//USER ENTRY

#include <stdio.h>
int main()
{
    int i,sum,num;
    sum=0;
    

   
    //USING FOR LOOP
    for(i=0;i<10;i++)
    
{
    printf("ENTER YOUR NUMBER:\n");
    scanf("%d",&num);
    
    sum+=num;
    
}

printf("THE SUM OF ENTERED NO IS %d", sum);
return 0;    
}


//WE CAN USEWHILE LOOP THIS ITERATION TOO 

// #include <stdio.h>
// int main()
// {
//     int i,sum,num;
//     sum=0;
//     i=0;

//     while(i!=10)
//     //  while(i<10) 
    
//     {
//     printf("ENTER YOUR NUMBER:\n");
//     scanf("%d",&num);
    
//     sum+=num;
//     i++;
//     }

// printf("THE SUM OF ENTERED NO IS %d", sum);
// return 0;    
// }

