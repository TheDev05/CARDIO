//*****BUILDING A MANAGEMENT LOGIN SYSTEM*****

#include <stdio.h>
int main()
{
    int i,choice_input,user_name,limit, password;
    
    user_name=0000;
    password=1234;
    limit=5;

    

    label1:
    printf("WELCOME TO LOGIN PAGE\n KINDLY INPUT YOUR USER NAME THEN PASSWORD\n");
    scanf("%d %d",&user_name,&password);
    
    
    if((password==1234)&&(user_name==0000))
    {
        printf("****\nWELCOME BACK TO YOUR ACCOUNT*****\n");
        printf("KINDLY CHOOSE ANY OPTION\n 1.EXAMINATION RESULT\n 2.QUESTION PAPER\n 3.ATTENDENCE\n 4.YOUR PROFILE\n");
        scanf("%d",&choice_input);
        

        switch(choice_input)
        {
        case 1: printf("WELCOME TO EXAMINATION RESULT PAGE");
                break;
        case 2: printf("WELCOME TO QUESTION PAPER COUROUSEL");
                break;
        case 3: printf("WELCOME TO ATTENDENCE DATASHEET");
                break;
        case 4: printf("WELCOME TO YOUR PROFILE");
                break;
        default: printf("INVALID INPUT, CHOOSE CORRECT OPTIONS");
                break;
        }        
    }

    else
      {
        limit--;
        if(limit!=0)
        {
        printf("***YOUR LOGIN OR PASSWORD IS INCORRECT, TRY AGAIN***\n");
        goto label1;
        }
        else
        {
        printf("YOU HAVE CROSSED THE MAXIMUM ATTEMPT GOAL, WE ARE SORRY,PLEASE TRY AFTER SOME TIMES\n");
        }
        
      }      
     

return 0;
}

