//READING NAME BY SCANF USING %S AND WILD CARD ETC
//PRACTICING LEARNED TERMS

#include <stdio.h>
#include <conio.h>

int main()
{
  char name[9];

  printf("ENTER YOUR NAME:\n");

  //  scanf("%[^\n]", name);
  // scanf("%s",name);
  //  gets(name);
  fgets(name, 10, stdin);

  printf("YOUR NAME IS:");
  puts(name);

  return 0;
}
