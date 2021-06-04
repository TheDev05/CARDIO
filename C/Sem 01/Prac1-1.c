// //** Practical 1.1: Write a program to input following details of a under-graduate student
// i       Name (string)
// ii      Age (integer)
// iii     Contact number (long long integer)
// iv     Percentage in metric class (float / double)
// Your program should generate output as follows:

// **************STUDENT DATABASE*******************
// Enter name in capital letters: xyz pqr
// Enter age                           : 18
// Enter contact number        : 9876543210
// Enter percentage in metric : 86.84
// Thank you. Your data has been saved in our system
// **********************************************************


#include <stdio.h>
int main()
{
    char name;
    int age;
    long long contact;
    float percentage;

printf("ENTER STUDENT NAME:\n");
scanf("%s",&name);                      //ERROR FOUNDED: NAME NOT PRINTED CORRECT
                                        //WILL DO AGAIN AFTER STUDYING CONCEPT OF STRING AND ARRAYS

printf("ENTER STUDENT AGE:\n");
scanf("%d",&age);

printf("ENTER CONTACT NUMBER OF STUDENT:\n");
scanf("%lld",&contact);

printf("ENTER PERCENTAGE OF STUDENT:\n");
scanf("%f",&percentage);

printf("**********STUDENT DATABASE**********\n");
printf("STUDENT NAME:%char\n",name);

printf("STUDENT AGE:%d\n",age);
printf("STUDENT CONTACT NUMBER:%lld\n",contact);
printf("STUDENT PERCENTAGE:%f\n",percentage);
printf("THANK YOU YOUR DATA IS SAVED IN OUR SYSTEM\n");

return 0;
}