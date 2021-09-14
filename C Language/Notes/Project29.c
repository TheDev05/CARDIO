//PRACTICING STRLEN

#include <stdio.h>
#include <string.h>

int main()
{
    char name[10];
    int count;

    printf("ENTER YOUR NAME\n");
        fgets(name, 10, stdin);

    count = strlen(name);
    printf("THE WORD IN YOUR WORD IS %d", count);
    return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char name[10];
//     int count;

//     printf("ENTER YOUR NAME:\n");
//     fgets(name,10,stdin);
    

//     count=strlen(name);
//     printf("COUNT=%d",count);

//     return 0;
// }