//READING NAME BY SCANF USING %S AND WILD CARD ETC
//PRACTICING LEARNED TERMS

// #include <stdio.h>
// #include <conio.h>

// int main()
// {
//   char name[9];

//   printf("ENTER YOUR NAME:\n");

//   //  scanf("%[^\n]", name);
//   // scanf("%s",name);
//   //  gets(name);
//   fgets(name, 10, stdin);

//   printf("YOUR NAME IS:");
//   puts(name);

//   return 0;
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
int main()
{
  char ch;

  printf("ENTER A CHARACTER:\n");
  ch = getchar();

  printf("CHARACTER IS: ");
  putchar(ch);

  fflush(stdin);

  char name[10];

  printf("ENTER YOUR NAME:\n");
  // scanf("%[^\n]%*c", name);
  fgets(name, 10, stdin);

  printf("NAME IS: ");
  printf("%s", name);

  return (0);
}