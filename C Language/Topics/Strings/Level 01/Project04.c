// //**Copy one string to another string.
// //**23.02.2021

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char name1[20], name2[20];

//     printf("ENTER YOUR FIRST NAME:\n");
//     scanf("%[^\n]%*c", &name1);

//     printf("ENTER YOUR SECOND NAME:\n");
//     scanf("%[^\n]%*c", &name2);

//     strcpy(name1, name2);

//     printf("YOU ARE ALSO KNOWN BY YOUR LAST NAME AS %s", name2);

//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**
//TODO:IMPORTANT: WITHOUT HEADER AND WITHOUT KMOWING THE LENGTH OF STRING


#include <stdio.h>
// #include <string.h>


void copy(char *p1, char *p2)
{
    int i;
    for (i = 0; *(p2 + i) != '\0'; i++)
    {
        *(p1 + i) = *(p2 + i);
    }
    *(p1 + i) = '\0';
}

int main()
{
    char text1[20];
    char text2[20];
    int count = 20;

    printf("ENTER FIRST STYRING:\n");
    fgets(text1, 20, stdin);

    printf("ENTER SECOND STRING:\n");
    fgets(text2, 20, stdin);

    // strcpy(text1, text2);
    copy(text1, text2);

    printf("TEXT 01: %s", text1);

    return (0);
}