//**Concatenate two strings.
//**23.02.2021
//!!BUT HOW TO PUT WITH A SPACE BETWEEN THEM


#include <stdio.h>
#include <string.h>

int main()
{
    char name1[20], name2[20], a;
    int count;
    

    printf("ENTER YOUR FIRST NAME:\n");
    scanf("%[^\n]%*c", &name1);

    count = strlen(name1);
   
    // name1[count] = '\n';

    printf("ENTER YOUR SECOND NAME:\n");
    scanf("%[^\n]%*c", &name2);

    strcat(name1, name2);

    printf("YOUR FULL NAME IS: %s\n", name1);
    return (0);
}