// ** CUSTOMER DATA COLLECTION USING STRUCTURE
// ** 08.03.2021

#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    char sex[5];
    int reg;
    int age;
    long cont_number;  //? **FOR READ AND WRITE DOUBLE INTs WE HAVE TO USE %ld SPECIFIER IN BOTH SCAN AND PRINTF.
} portal;

portal customer[10];

portal store(int, int);//? **FUNCTION PROTOTYPE...INPUT TYPE AND RETURN TYPE

int main()
{
    int count, find;

    printf("ENTER TOTAL NUMBER OF CUSTOMERS:\n");
    scanf("%d", &count);

    printf("****ENTER CUSTOMER DETAILS****\n");
    for (int i = 0; i < count; i++)
    {
        fflush(stdin);
        printf("ENTER CUSTOMER REGISTRATION NUMBER:\n");
        scanf("%d", &customer[i].reg);
        fflush(stdin);

        printf("ENTER NAME OF CUSTOMER:\n");
        scanf("%[^\n]%*c", customer[i].name);

        printf("ENTER CUSTOMER AGE:\n");
        scanf("%d", &customer[i].age);
        fflush(stdin);

        printf("ENTER CUSTOMER SEX:\n");
        // scanf("%s", &customer[i].sex);
        scanf("%[^\n]%*c", customer[i].sex);
        fflush(stdin);

        printf("ENTER CUSTOMER MOBILE NUMBER:\n");
        scanf("%ld", &customer[i].cont_number);
    }

    fflush(stdin);
    printf("ENTER REGISTRATION NUMBER OF CUSTOMER YOU WANT TO FIND DETAILS:\n");
    scanf("%d", &find);

    portal detail;

    detail = store(find, count);
    printf("****CUSTOMER DETAILS****\n");
    printf("CUSTOMER NAME: %s\n", detail.name);
    printf("CUSTOMER REGISTRATION NUMBER: %d\n", detail.reg);
    printf("CUSTOMER SEX: %s\n", detail.sex);
    printf("CUSTOMER  AGE: %d\n", detail.age);
    printf("CUSTOMER NUMBER: %ld\n", detail.cont_number);

    return (0);
}

portal store(find, count) int find, count;

{
    portal collect;
    for (int i = 0; i < count; i++)
    {
        if (customer[i].reg == find)
        {

            strcpy(collect.name, customer[i].name);
            collect.reg = customer[i].reg;
            collect.age = customer[i].age;
            strcpy(collect.sex, customer[i].sex);
            collect.cont_number = customer[i].cont_number;
        }
    }
    return (collect);
}