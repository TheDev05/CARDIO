//PRACTICING STRCAT LIBRARY FUNCTIONS

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char name1[10], name2[10];

//     printf("ENTER FIRST NAME:\n");
//     gets(name1);

//     printf("ENTER SECOND NAME:\n");
//     gets(name2);

//     strcat(name1, name2);

//     printf("YOUR NAME IS :\n");
//     puts( name1);

//     return (0);
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char name1[5],name2[5];

//     printf("ENTER YOUR FIRST NAME:\n");
//     gets(name1);

//     printf("ENTER YOUR SECOND NAME:\n");
//     gets(name2);

//     strcat(name1,name2);
//     // printf("THE FULL NAME IS:%s\n", name1);
//     puts(name1);

// return 0;
// }

// *********************************************************************************************************************************************
// **RIVISON**

#include <stdio.h>
#include <string.h>

int main()
{
    char fname[10], lname[10];

    printf("ENTER FIRST NAME: \n");
    scanf("%[^\n]%*c", fname);

    int count = strlen(fname);

    fname[count] = ' ';
    fname[count + 1] = '\0';

    printf("ENTER LAST NAME: \n");
    scanf("%[^\n]%*c", lname);

    strcat(fname, lname);

    printf("FULL NAME: %s", fname);

    return (0);
}