#include <stdio.h>
#include <string.h>

const char *show() //? const return keyword is because we are returning string literal or constant's address.
{
    return ("ANKIT");
}
int main()
{
    char name[10];

    // strcpy(name, show());

    printf("COUNT: %s", show());
    return (0);
}
