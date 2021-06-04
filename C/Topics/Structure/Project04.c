//**LOGIN PORTAL WITH THE HELP OF UNIONS
//?? **IMPORTANT: https://stackoverflow.com/questions/66503579/why-this-c-program-gives-error-when-i-initialize-structure-member-outside-the-ma

#include <stdio.h>
#include <string.h>

typedef union
{
     int pin;
     char password[20];
     //  char name[20];
} facebook;

facebook login;

// facebook login={0000, dev};
// portal user = { .pin = 0000, .password = "alex" }; (in case of strings)

int main()
{

     // login.name[20]= {'a', 'n', 'k', 'i', 't', 'r', 'a', 'j','\0'};  //? ** HOW TO INITIALIZE A STRING ARRAY OF STRING/ UNION: caant assign an array directly use strcpy to copy in such casaes or for condition use strcmp

     int user_name;
     int portal;

     // login.pin[20] = "dev";
     // login.pin = 0000; //? **WHY CANNT WE INTIALIZE THESE TWO VARIABLE OUTSIDE MAIN..THIS GIVES ERROR, WHY???....we can but this mehod is wrong look above we have commented that assignmenet part.... facebook login={0000, dev}

     printf("WELCOME TO FACEBOOK\n");
     printf("ENTER 0 TO LOGIN VIA PIN OTHERWISE TYPE 1 TO LOGIN VIA PASSWORD\n");
     scanf("%d", &portal);

     if (portal == 0)
     {
          fflush(stdin);
          printf("TYPE YOUR USERNAME NAME:\n");
          // scanf("%[^\n]%*c", user_name);
          scanf("%d%*c", &user_name);

          printf("TYPE YOUR PIN:\n");
          scanf("%d%*c", &login.pin);

          if (user_name == 1234 && login.pin == 0000)
          {
               printf("WELCOME TO FACEBOOK\n");
          }
          else
               printf("USER-PASSWORD INCORRECT\n");
     }

     else

         if (portal == 1)

     {
          fflush(stdin);
          printf("TYPE YOUR USERNAME NAME:\n");
          scanf("%d%*c", &user_name);

          printf("TYPE YOUR PASSWORD:\n");
          scanf("%[^\n]%*c", login.password);

          if (user_name == 1234 && strcmp(login.password, "dev") == 0)
          {
               printf("WELCOME TO FACEBOOK\n");
          }
          else
               printf("USER-PASSWORD INCORRECT\n");
     }

     else
          printf("ACEES DENIED\n");

     return (0);
}
