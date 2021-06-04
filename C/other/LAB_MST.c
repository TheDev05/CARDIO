#include <stdio.h>

int main(){

 char name[50],uid[10], sec[10], branch[20];
 char group; int age;
 unsigned long long int cont_num;

 //printf() is used to display the output
 printf("Enter your name: ");
 
 /*gets function is used to scan or read a line of text from a standard input (stdin) device and 
 store it in the String variable*/
 gets(name);

 printf("Enter your UID: ");
 //scanf() is used to read the inputs. 
 scanf("%s",&uid);

 printf("Enter your Section: ");
 scanf("%s",&sec);

 printf("Enter your group: ");
 scanf(" %c",&group);

 printf("Enter your branch: ");
 scanf("%s", branch);

 printf("Enter your contact number: ");
 scanf("%llf",&cont_num);

 printf("Enter your age(in years): ");
 scanf("%d", age);

 printf("***** Your Data Is Saved *****\n");
 printf("Name: %s\n", name);
 printf("UID: %s\n", uid);
 printf("Section: %s\n", sec);
 printf("Group: %c\n", group);
 printf("Branch: %s\n", branch);
 printf("Contact Number: llu\n", cont_num);
 printf("Age: %d\n",age);

return 0;
}