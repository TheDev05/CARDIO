/******* STUDENT RECORD MANAGEMENT *******
 *******         GROUP 1            ******/

#include <stdio.h>

int main(){
 int n;
 char name[n][50],uid[n][10], sec[n][10], branch[n][20], group [n];
 int age[n], opt[n];
 int cont_num[n];

 printf("Enter total number of students: ");
 scanf("%d", &n);
 
// Loop statements  are executed for number of times in C until the condition becomes false. 
for(int i = 0; i < n ;i++){
        
    printf("\nEnter data for student whose roll no is %d\n", i+1);

//printf() is used to display the output
    printf("Enter his/her name: ");
    fflush(stdin);

/*gets function is used to scan or read a line of text from a standard
input (stdin) device and store it in the String variable*/
   gets(name[i]);

   fflush(stdin);
   printf("Enter his/her UID: ");
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
   scanf("%d",&cont_num[i]);

 again:
 printf("\nSelect the choice in which you want to enter the age\n");
 printf("1. Enter your age in years\n");
 printf("2. Enter your age in months\n");
 printf("3. Enter your age in days\n");
 printf("Enter the choice: ");
 fflush(stdin);
 scanf("%d",&opt[i]);

// Switch case statements are a substitute for long if statements(decision making staements)
 switch(opt[i]){
  case 1:
    printf("Enter your age (in years): " );
    scanf("%d",&age[i]);
    break;
  case 2:
    printf("Enter your age (in months): " );
    scanf("%d",&age[i]);
    break;
  case 3:
    printf("Enter your age (in days): " );
    scanf("%d",&age[i]);
    break;
  default:
    printf("You entered wrong choice\n");
    goto again;
 }
 }


 printf("\n****** Your Data Is Saved ******\n\n");

 int num, roll;
 printf("Enter the total no of students whose data is required: ");
 fflush(stdin);
 scanf("%d",&num);

 for(int j = 0; j < num; j++){

     printf("Enter the roll no whose data is required: ");
     fflush(stdin);
     scanf("%d",&roll);

     printf("Name: %s\n", name[roll - 1]);
     printf("UID: %s\n", uid[roll - 1]);
     printf("Section: %s\n", sec[roll - 1]);
     printf("Group: %c\n", group[roll - 1]);
     printf("Branch: %s\n", branch[roll - 1]);
     printf("Contact Number: d\n", cont_num[roll - 1]);

// if-else-if ladder statements are decision making statement in C
//Here it is supposed that there is no system of leap year and no of days in all month is 31.
 if (opt[roll - 1] == 1 ){
    printf("Age (in years): %d\n",age[roll - 1]);
    printf("Age (in months): %d\n",age[roll - 1]*12);
    printf("Age (in days): %d\n",age[roll - 1]*365);
   }
 else if (opt[roll - 1] == 2 ){
    printf("Age (in years): %d\n",age[roll - 1]/12);
    printf("Age (in months): %d\n",age[roll - 1]);
    printf("Age (in days): %d\n",age[roll - 1]*31);
   }
 else if (opt[roll - 1] == 3 ){
    printf("Age (in years): %d\n",age[roll - 1]/365);
    printf("Age (in months): %d\n",age[roll - 1]/31);
    printf("Age (in days): %d\n",age[roll - 1]);
   }}
return 0;
}