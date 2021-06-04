//Copy all elements from an array to another array.

#include <stdio.h>
#include <string.h>

int main()
{
    char c, name1[21], name2[21];

    printf("ENTER YOUR NAME:\n");

    scanf("%[^\n]%*c", name1);

    // c=getchar //!! IMPORTANT CONCEPT USE HERE,  RIVISE NOTES AFTER FUNCTION TOPIC

    printf("ENTER YOUR SURNAME:\n");

    scanf(" %[^\n]%*c", name2);

    strcpy(name1, name2);
    printf("HELLO! %s", name2);

    return 0;
}