//Copy all elements from an character array to another characxter array.

#include <stdio.h>
#include <string.h>

int main()
{
    char ch, name1[21], name2[21];

    printf("ENTER YOUR NAME:\n");

    scanf("%[^\n]", name1);

    //? IMPORTANT CONCEPT USE HERE: REMOVING NEW LINE CHARACTER FROM INPUT BUFFER WITH FOLLOWING METHODS:

    printf("ENTER YOUR SURNAME:\n");

    ch= getchar(); //*FIRST METHOD

    // scanf(" %[^\n]", name2); //*SECOND METHOD

    // scanf("%[^\n]%*c", name2); //*THIRDD METGHOD

    // fflush(stdin); //* FOURTH METHOD

    scanf("%[^\n]", name2);

    strcpy(name1, name2);
    printf("HELLO! %s", name2);

    return 0;
}