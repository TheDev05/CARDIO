//FINDING SUM OF 10 NUMBERS BY NOT USING LOOP
//USER ENTRY
//USING FORMULLA FOR SUM OF N NUMBERS I.E N(N+1)/2

#include <stdio.h>
int main()
{
    int n,sum;
    printf("ENTER THE TOTAL NUMBER COUNT, YOU WANT THEIR SUM:\n");
    scanf("%d", &n);

    sum=n*(n+1)/2;
    printf("THE SUM OF %d NUMBERS IS %d", n,sum);

return 0;    
}
