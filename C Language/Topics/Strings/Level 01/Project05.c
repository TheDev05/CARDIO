//**Concatenate two strings.
//**23.02.2021

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char name1[20], name2[20], a;
//     int count;

//     printf("ENTER YOUR FIRST NAME:\n");
//     scanf("%[^\n]%*c", &name1);

//     count = strlen(name1);

//     // name1[count] = '\n';

//     printf("ENTER YOUR SECOND NAME:\n");
//     scanf("%[^\n]%*c", &name2);

//     strcat(name1, name2);

//     printf("YOUR FULL NAME IS: %s\n", name1);
//     return (0);
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <string.h>

int main()
{
    char text1[20], text2[20];

    printf("ENTER FIRST STRING:\n");
    fgets(text1, 20, stdin);

    printf("ENTER SECOND STRING:\n");
    fgets(text2, 20, stdin);

    int count = strlen(text1);
    text1[count] = ' ';
    text1[count] = '\0';

    strcat(text1, text2);

    printf("REQUIRED STRING:");
    printf("%s", text1);

    return (0);
}