//**C program to copy one string to another.
//**USER-DEFINED STRCPY()

#include <iostream>

int strlen(char *p)
{
    int i;
    for (i = 0; *(p + i) != '\0'; i++)
    {
    }
    return (i);
}

void strcpy(char *p1, char *p2)
{
    int count = strlen(p2);

    for (int i = 0; i < count; i++)
    {
        *(p1 + i) = *(p2 + i);
    }

    // std::cout << count;
    *(p1 + count) = '\0'; //? **IMPORTANT COUNT NOT COUNT+1;
}

int main()
{
    char str1[20], str2[20];

    std::cout
        << "ENTER STRING: " << std::endl;
    std::cin.getline(str1, 20);

    strcpy(str2, str1);

    std::cout << "AFTER COPY IN STRING SECONG: " << std::endl
              << str2 << std::endl;

    return (0);
}
