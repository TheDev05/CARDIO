/******* STUDENT RECORD MANAGEMENT *******
 *******         GROUP 1            ******/

#include <stdio.h>

int main(){
 int n;
 char name[n][50],uid[n][10], sec[n][10], branch[n][20], group [n];
 int age[n], opt[n];
 long long int cont_num[n];

 printf("Enter total number of students: ");
 scanf("%d", &n);

// Loop statements  are executed for number of times in C until the condition becomes false.
for(int i = 0; i < n ;i++){

    printf("\n\n\nEnter data for student whose roll no is %d\n", i+1);

//printf() is used to display the output
    printf("Enter his/her name: ");
    fflush(stdin);

/*gets function is used to scan or read a line of text from a standard
input (stdin) device and store it in the String variable*/
   gets(name[i]);


   printf("Enter his/her UID: ");
   fflush(stdin);
//scanf() is used to read the inputs.
   scanf("%s",&uid[i]);

   printf("Enter his/her Section: ");
   fflush(stdin);
   scanf("%s",&sec[i]);

   printf("Enter his/her group: ");
   fflush(stdin);
   scanf(" %c",&group[i]);

   printf("Enter his/her branch: ");
   fflush(stdin);
   scanf("%s", branch[i]);

   printf("Enter his/her contact number: ");
   fflush(stdin);
   scanf("%lld",&cont_num[i]);

 again:
 printf("\nSelect the choice in which you want to enter the age\n");
 printf("1. Enter your age in years\n");
 printf("2. Enter your age in months\n");
 printf("3. Enter your age in days\n");
 printf("\nEnter the choice: ");
 fflush(stdin);
 scanf("%d",&opt[i]);

// Switch case statements are a substitute for long if statements(decision making staements)
 switch(opt[i]){
  case 1:
    printf("\nEnter his/her age (in years): " );
    scanf("%d",&age[i]);
    break;
  case 2:
    printf("\nEnter his/her age (in months): " );
    scanf("%d",&age[i]);
    break;
  case 3:
    printf("\nEnter his/her age (in days): " );
    scanf("%d",&age[i]);
    break;
  default:
    printf("\nYou entered wrong choice\n");
    goto again;
 }
 }


 printf("\n\n****** Your Data Is Saved ******\n\n");

 int r, s, check;

     again1:
     printf("Enter the roll no of student whose details is required: ");
     scanf("%d",&r);
     if( r <= n ){
     s = r-1;
     printf("Name: %s\n", name[s]);
     printf("UID: %s\n", uid[s]);
     printf("Section: %s\n", sec[s]);
     printf("Group: %c\n", group[s]);
     printf("Branch: %s\n", branch[s]);
     printf("Contact Number: %lld\n", cont_num[s]);

// if-else-if ladder statements are decision making statement in C
//Here it is supposed that there is no system of leap year and no of days in all month is 31.
 if (opt[s] == 1 ){
    printf("Age (in years): %d\n",age[s]);
    printf("Age (in months): %d\n",age[s]*12);
    printf("Age (in days): %d\n",age[s]*365);
   }
 else if (opt[s] == 2 ){
    printf("Age (in years): %d\n",age[s]/12);
    printf("Age (in months): %d\n",age[s]);
    printf("Age (in days): %d\n",age[s]*31);
   }
 else if (opt[s] == 3 ){
    printf("Age (in years): %d\n",age[s]/365);
    printf("Age (in months): %d\n",age[s]/31);
    printf("Age (in days): %d\n",age[s]);
   }
  printf("\n\nIf you want check details of other student than enter 1 otherwise 0: ");
  fflush(stdin);
  scanf("%d", &check);
       if ( check == 1){
           goto again1;
       }}
    else {
       printf("\nYou entered invalid roll no\n");
       goto again1;
    }
return 0;
}