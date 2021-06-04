//PRINTING 5 NO FROM IN REVERSE ORDER, DATA BY USER ENTRY

#include <stdio.h>
int main()
{
    int num, count;

    printf("ENTER NUMBER FROM YOU WANT A REVERSE ORDER:\n");
    scanf("%d", &count);

    for (int i = count; i != count - 5; i--)
    {
        printf("%d", i);
    }
    return (0);
}