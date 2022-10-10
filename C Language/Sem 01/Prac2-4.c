// Practical 2.4: If last day of mth month of the year is Friday then find out nth day(1<=n<=31) of the same month .
// MATHS BASIC CONCEPT IS USED help: https://brainly.in/question/26988817

#include <stdio.h>
int main()
{
    int m,n,rem,leap;

    printf("ENTER THE MONTH NUMBER:\n");
    scanf("%d",&m);

    if(m>=1||m<=12)
    {
        if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12))
      {
        printf("ENTER THE DAY YOU WANT TO FIND:\n");
        scanf("%d",&rem);

        n=rem%7;
        
        if(n==0)
        {
        printf("THE DAY IS TUESDAY\n");
        return 0;
        }
        
        if(n==1)
        {
        printf("THE DAY IS WEDNESDAY\n");
        return 0;
        }   

        if(n==2)
        {
        printf("THE DAY IS THURSDAY\n");
        return 0;
        }

        if(n==3)
        {
        printf("THE DAY IS FRIDAY\n");
        return 0;
        }

        if(n==4)
        {
        printf("THE DAY IS SATURDAY\n");
        return 0;
        }

        if(n==5)
        {
        printf("THE DAY IS SUNDAY\n");
        return 0;
        }

        if(n==6)
        {
        printf("THE DAY IS MONDAY\n");
        return 0;
        }
      }  

        
        if(m==4||m==6||m==9||m==11)
        {
            
                printf("ENTER THE DAY YOU WANT TO FIND:\n");
                scanf("%d",&rem);
                 n=rem%7;
            

            if(n==0)
            {
            printf("THE DAY IS WEDNESDAY\n");
            return 0;
            }

            if(n==1)
            {
            printf("THE DAY IS THURSDAYn");
            return 0;
            }

            if(n==2)
            {
            printf("THE DAY IS FRIDAY\n");
            return 0;
            }

            if(n==3)
            {
            printf("THE DAY IS SATURDAY\n");
            return 0;
            }

            if(n==4)
            {
            printf("THE DAY IS SUNDAY\n");
            return 0;
            }

            if(n==5)
            {
            printf("THE DAY IS MONDAY\n");
            return 0;
            }

            if(n==6)
            {
            printf("THE DAY IS TUESDAY\n");
            return 0;
            }

        }    

        if (m==2)
        {
            printf("IF THIS IS LEAP YEAR ENTER 1 ORTHERWISE 0:\n");
            scanf("%d",&leap);

            if (leap==1)
            {
                printf("ENTER THE DAY YOU WANT TO FIND:\n");
                scanf("%d",&rem);
                 n=rem%7;
            }

            if(n==0)
            {
            printf("THE DAY IS THURSDAY\n");
            return 0;
            }

            if(n==1)
            {
            printf("THE DAY IS FRIDAY\n");
            return 0;
            }

            if(n==2)
            {
            printf("THE DAY IS SATURDAY\n");
            return 0;
            }

            if(n==3)
            {
            printf("THE DAY IS SUNDAY\n");
            return 0;
            }

            if(n==4)
            {
            printf("THE DAY IS MONDAY\n");
            return 0;
            }

            if(n==5)
            {
            printf("THE DAY IS TUESDAY\n");
            return 0;
            }

            if(n==6)
            {
            printf("THE DAY IS WESNESDAY\n");
            return 0;
            }  
            }
            
            if(leap==0)
            {
                printf("ENTER THE DAY YOU WANT TO FIND:\n");
                scanf("%d",&rem);
                 n=rem%7;

            if(n==0)
            {
            printf("THE DAY IS FRIDAY\n");
            return 0;
            }

            if(n==1)
            {
            printf("THE DAY IS SATURDAY\n");
            return 0;
            }

            if(n==2)
            {
            printf("THE DAY IS SUNDAY\n");
            return 0;
            }

            if(n==3)
            {
            printf("THE DAY IS MONDAY\n");
            return 0;
            }

            if(n==4)
            {
            printf("THE DAY IS TUESDAY\n");
            return 0;
            }

            if(n==5)
            {
            printf("THE DAY IS WEDNESDAY\n");
            return 0;
            }

            if(n==6)
            {
            printf("THE DAY IS THURSDAY\n");
            return 0;
            }  
            
        }
            

        
        


    }
}    


 
