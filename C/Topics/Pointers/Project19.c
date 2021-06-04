//**SIMPLE ADDITION OF POINTER AND SOME OTHER MANIPULATIONS ON STRINGS.
//**PRACTICE:01**

#include <stdio.h>
#include <string.h>

int main()
{
    char name[] = "ankit";
    int count;

    count = strlen("ankit");

    printf("COUNT: %d", count);
    return (0);
}

//**PRACTICE:02**

#include <stdio.h>
#include <string.h>

int length(char *);
char *reverse(char *, int);

int main()
{
    char word[] = "COMPUTER";
    int count;

    count = length("COMPUTER");

    printf("%s", reverse(word, count));
}

int length(char *p)
{
    int count;
    for (count = 0; *(p + count) != '\0'; count++)
        ;

    return (count);
}

char *reverse(char *p, int count)
{
    char temp;
    for (int i = 0; i < count / 2; i++)
    {
        temp = *(p + i);

        // *(p + i) = *(p - (count - 1) - i);
        // *(p - (count - 1) - i) = temp;

        *(p + i) = *(p + (count - 1) - i);//? IMPORTANT
        *(p + (count - 1) - i) = temp;
    }
    return (p);
}

// **PRACTICE:03**

#include <stdio.h>
#include <string.h>

const char *show() //? const return keyword is because we are returning string literal or constant's address.
{
    return ("ANKIT");
}
int main()
{
    char name[10];

    strcpy(name, show());

    printf("OUTPUT: %s", name);
    return (0);
}
