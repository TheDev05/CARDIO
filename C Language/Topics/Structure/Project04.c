//**LOGIN PORTAL WITH THE HELP OF UNIONS
//?? **IMPORTANT: https://stackoverflow.com/questions/66503579/why-this-c-program-gives-error-when-i-initialize-structure-member-outside-the-ma

// #include <stdio.h>
// #include <string.h>

// typedef union
// {
//      int pin;
//      char password[20];
//      //  char name[20];
// } facebook;

// facebook login;

// facebook login={0000, dev};
// portal user = { .pin = 0000, .password = "alex" }; (in case of strings)

// int main()
// {

// login.name[20]= {'a', 'n', 'k', 'i', 't', 'r', 'a', 'j','\0'};  //? ** HOW TO INITIALIZE A STRING ARRAY OF STRING/ UNION: caant assign an array directly use strcpy to copy in such casaes or for condition use strcmp

//      int user_name;
//      int portal;

//      // login.pin[20] = "dev";
// login.pin = 0000; //? **WHY CANNT WE INTIALIZE THESE TWO VARIABLE OUTSIDE MAIN..THIS GIVES ERROR, WHY???....we can but this mehod is wrong look above we have commented that assignmenet part.... facebook login={0000, dev}

//      printf("WELCOME TO FACEBOOK\n");
//      printf("ENTER 0 TO LOGIN VIA PIN OTHERWISE TYPE 1 TO LOGIN VIA PASSWORD\n");
//      scanf("%d", &portal);

//      if (portal == 0)
//      {
//           fflush(stdin);
//           printf("TYPE YOUR USERNAME NAME:\n");
//           // scanf("%[^\n]%*c", user_name);
//           scanf("%d%*c", &user_name);

//           printf("TYPE YOUR PIN:\n");
//           scanf("%d%*c", &login.pin);

//           if (user_name == 1234 && login.pin == 0000)
//           {
//                printf("WELCOME TO FACEBOOK\n");
//           }
//           else
//                printf("USER-PASSWORD INCORRECT\n");
//      }

//      else

//          if (portal == 1)

//      {
//           fflush(stdin);
//           printf("TYPE YOUR USERNAME NAME:\n");
//           scanf("%d%*c", &user_name);

//           printf("TYPE YOUR PASSWORD:\n");
//           scanf("%[^\n]%*c", login.password);

//           if (user_name == 1234 && strcmp(login.password, "dev") == 0)
//           {
//                printf("WELCOME TO FACEBOOK\n");
//           }
//           else
//                printf("USER-PASSWORD INCORRECT\n");
//      }

//      else
//           printf("ACEES DENIED\n");

//      return (0);
// }

// *******************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <string.h>

struct data
{
     int pin;
     char pass[20];
};

int main()
{
     char user_name[20];
     struct data user;

     printf("ENTER YOUR USER_NAME: \n");
     scanf("%[^\n]%*c", user_name);

     printf("ENTER YOUR PIN: \n");
     scanf("%d", &user.pin);

     getchar();

     printf("ENTER YOUR PASSWORD:\n");
     scanf("%[^\n]%*c", &user.pass);

     printf("YOUR ACCOUNT HAS BEEN CREATED\n");
     printf("**************************************************************************************************************************\n");
     printf("ENTER FOLLOWING KEYS FOR SHOWN ACTIONS:\n");
     printf("1: LOGIN\n");
     printf("0: EXIT\n");

     // getchar();
     int key, repeat = 0;

     scanf("%d", &key);
     printf("YOU ENTERED: %d\n\n", key);

     if (key == 0)
     {
          return (0);
     }
     else if (key == 1)
     {
     again:

          printf("CHOOSE OPTION FOR LOGIN:\n");
          printf("1: LOGIN VIA PIN\n");
          printf("0: LOGIN VIA PASSWORD:\n");

          getchar();
          int choose;

          scanf("%d", &choose);
          printf("YOU ENTERED: %d\n\n", choose);

          if (choose == 1)
          {
               char login_name[20];
               int login_pin;

               getchar();

               printf("ENTER YOUR USER_NAME:\n");
               scanf("%[^\n]%*c", login_name);

               printf("ENTER YOUR PIN:\n");
               scanf("%d", &login_pin);

               if ((strcmp(login_name, user_name) == 0) && (login_pin == user.pin))
               {
                    printf("****************************************************************************************************************\n");
                    printf("***********************WELCOME TO PORTAL********************");

                    printf("\n");
                    printf("1: SEE YOUR CREDITINOLS\n");
                    printf("2: RESET YOUR PASSWORD\n");
                    printf("0: EXIT\n");
               }

               else
               {
                    printf("TRY AGAIN,WRONG PIN\n");
                    repeat++;

                    if (repeat == 3)
                    {
                         printf("YOU HAVE CROSSED YOUR LOGIN LIMIT, TRY FROM BEGNNING");
                         return (0);
                    }

                    goto again;
               }
          }
          else if (choose == 0)
          {
               char login_name[20], login_pass[20];

               getchar();

               printf("ENTER YOUR USER_NAME:\n");
               scanf("%[^\n]%*c", login_name);

               printf("ENTER YOUR PAASORD:\n");
               scanf("%[^\n]%*c", login_pass);

               if ((strcmp(login_name, user_name) == 0) && (strcmp(login_pass, user.pass) == 0))
               {
                    printf("***WELCOME TO PORTAL\n***");
               }

               else
               {
                    printf("TRY AGAIN,WRONG PIN\n");
                    repeat++;

                    if (repeat == 3)
                    {
                         printf("YOU HAVE CROSSED YOUR LOGIN LIMIT, TRY FROM BEGNNING");
                         return (0);
                    }

                    goto again;
               }
          }
          else
               printf("ENTER VALID KEY\n");
     }
     else
          printf("ENTER VALID KEY\n");
}