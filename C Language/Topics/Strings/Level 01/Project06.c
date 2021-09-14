// **Compare two strings
//**23.02.2021

#include <stdio.h>
#include <string.h>

int main()
{
    char name1[20], name2[20];
    int count, key1;

    printf("ENTER FIRST WORD:\n");
    scanf("%[^\n]%*c", &name1);

    printf("ENTER SECOND WORD:\n");
    scanf("%[^\n]%*c", &name2);

    key1 = strlen(name1);
    printf("%d", key1);

    count = strcmp(name1, name2);

    if (count == 0)
    {
        printf("BOTH ARE EQUAL\n");
    }
    else
        printf("BOTH NUMBERS ARE UNEQUAL\n");

    return (0);
}
