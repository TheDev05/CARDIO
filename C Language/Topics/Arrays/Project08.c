//C Program For Print "I AM IDIOT" Instead Of ANY THING TYPED OR INPUTTED Using Array
//*******REVISED*******

#include <stdio.h>
#include <conio.h>

int main()
{
    char c;
    int i=0;
    char array[] = "YOU ARE IDIOT";

        printf("ENTER YOUR NAME:\n");
    while (1)
    {
        c = getch();
        printf("%c", array[i]);
        i++;

        if (i == 13)
        {
            printf(" ");
            i = 0;
        }
    }
    return (0);
}