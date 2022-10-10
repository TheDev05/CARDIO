//**C program to concatenate two strings without using library function.

// #include <iostream>

// void strcat(char *, char *);
// int strlen(char *);

// int main()
// {
//     char str1[40], str2[20];

//     std::cout << "ENTER FIRST STRING: " << std::endl;
//     std::cin.getline(str1, 20);

//     std::cout << "ENTER SECOND STRING: " << std::endl;
//     std::cin.getline(str2, 20);

//     strcat(str1, str2);

//     std::cout << "AFTER CONCATENATION OF STRING 2 TO STRING 1: " << std::endl;
//     std::cout << str1;

//     return (0);
// }

// void strcat(char *p1, char *p2)
// {
//     int count1 = strlen(p1);
//     int count2 = strlen(p2);
//     int j = 0;

//     for (int i = count1; i < count2 + count1; i++)
//     {
//         *(p1 + i) = *(p2 + j);
//         j++;
//     }

//     *(p1 + count1 + count2) = '\0';
// }

// int strlen(char *p)
// {
//     int i;
//     for (i = 0; *(p + i) != '\0'; i++)
//     {
//     }

//     return (i);
// }

//**********************************************************************************************************************************************
//**RIVISON**

#include <iostream>

void strcat(char *, char *);
int strlen(char *);

int main()
{
    char str1[40], str2[20];

    std::cout << "ENTER YOUR FISRT STRING: " << std::endl;
    std::cin.getline(str1, 20);

    std::cout << "ENTER YOUR SECOND STRING: " << std::endl;
    std::cin.getline(str2, 20);

    strcat(str1, str2);

    std::cout << "AFTER CONCATENATION STRING IS: " << std::endl
              << str1 << std::endl;

    return (0);
}

void strcat(char *p1, char *p2)
{
    int count1 = strlen(p1);
    int count2 = strlen(p2);

    int j = count1;

    for (int i = 0; i < count2; i++)
    {
        *(p1 + j) = *(p2 + i);
        j++;
    }

    *(p1 + count2 + count1) = '\0';
}

int strlen(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
    }
    return (i);
}