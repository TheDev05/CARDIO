// Practical 3.4: While travelling in a train, you observe some college students pulling the alarm chain simply to get down at their desired point. Out of n students m<=n times students pull the chain .You have to print according to the following:
// Out of n students m<=n times students pull the chain .You have to print according to the following:
// 1)    If m is >=80 % of n then print strict action is required to restrict this event 

// 2)    If m is between 50 to 80 % then print guidelines should be issued

// 3)    If between 10 to 50% then print request to restrict the event

// 4)    If less than 10% then print No action required  

#include <stdio.h>
int main()
{
    int n,p,m,perc80_of_n;
    printf("ENTER THE TOTAL NO OF STUDENTS\n");
    scanf("%d",&n);
    printf("ENTER NO OF STUDENTS WHO PULLED CHAIN\n");
    scanf("%d", &p);
    m=(p*100)/n;
    perc80_of_n=(n*80)/100;
    if(m>=80)
    printf("STRICT ACTION IS REQUIRED TO STRICT THIS EVENT\n");

    else
    {
        if((m>50)&&(m<80))
        printf("GUIDLINES SHOULD BE ISSUED");
        else
        {
            if((m>10)&&(m<50))
            printf("REQUEST TO RESTRICT THE EVENT");
            else
            {
                if(m<10)
                printf("NO ACTION REQUIRED");
            }
            
        }
        
    }
return 0;
    
} 