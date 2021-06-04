//CHECKING INPUT NUMBER IS PRIME OR NOT

#include <stdio.h>
int main()
{
    int i,n;
    

    printf("ENTER YOUR NUMBER:\n");
    scanf("%d",&n);
 
    for(i=2;i<n;i++)
   {    
        if(n%i==0)
        {
            printf("%d is not a prime number\n",n);
            return 0;
        }
        
        else
        continue;
        
    }
printf("%d is a prime number\n",n);
return 0;
}