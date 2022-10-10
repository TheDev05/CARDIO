//PRACTICING STRCPY

#include <stdio.h>
#include <string.h>

int main()
{
    char name1[10], name2[10];

    printf("ENTER YOUR NAME:\n");
    fgets(name1, 10, stdin);

    printf("ENTER YOUR SIRNAME:\n");
    fgets(name2, 10, stdin);

    strcpy(name1, name2);

    printf("YOU WILL BE CALLED AS:\n");
    puts(name1);

    return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char name1[6]="SIWAN";
//     char name[6];

    

//     printf("ENTER YOUR CITY:\n");
//     gets(name);


//     strcpy(name1,name);
//     puts(name1);
// return 0;    
// }
