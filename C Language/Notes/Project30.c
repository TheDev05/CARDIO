//PRACTISING STRCMP

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   char name1[10], name2[10];

//   printf("ENTER FIRST NAME:\n");
//   fgets(name1, 10, stdin);

//   printf("ENTER SECOND NAME:\n");
//   fgets(name2, 10, stdin);

//   if (strcmp(name1, name2) == 0)
//   {
//     printf("EQUAL");
//   }
//   else
//   {
//     printf("UNEQUAL");
//   }

//   return (0);
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char city1[6],city2[6];

//     printf("ENTER YOUR CITY NAME:\n");
//     gets(city1);

//     printf("ENTER YOUR FRIENDS CITY:\n");
//     gets(city2);

//     if (strcmp(city1,city2)==0)

//     {
//       printf("THEY ARE EQUAL\n");
//     }

//     else
//     {
//         printf("THEY ARE UNEQUAL\n");
//     }
// return 0;
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <string.h>

int cmp(char *p1, char *p2)
{
  if (strcmp(p1, p2) == 0)
  {
    printf("pp");
    return (0);
  }
  else
    return (1);
}

int main()
{
  char name1[10], name2[10];

  printf("ENTER 1ST NAME:\n");
  fgets(name1, 10, stdin);

  printf("ENTER SECOND NAME: \n");
  fgets(name2, 10, stdin);

  if (cmp(name1, name2))
    printf("BOTH ARE NOT EQUAL\n");
  else
    printf("BOTH ARE EQUAL\n");

  return (0);
}