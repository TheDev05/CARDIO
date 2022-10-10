//**C program to copy one string to another and count copied characters.
//** WITHOUT LIB FILES

#include <iostream>
int copy(char *, char *);

int main()
{
    char str[20], cop[22];

    std::cout << "ENTER YOUR FIRST STRING: " << std::endl;
    std::cin.getline(str, 20);

    int count = copy(cop, str);

    std::cout << "COPIED STRING: " << cop << std::endl
              << "COUNT: " << count << std::endl;
    return (0);
}

int copy(char *p1, char *p2)
{
    int i;
    for (i = 0; *(p1 + i) != '\0'; i++)
    {
        *(p1 + i) = *(p2 + i);
    }

   
    return (i);
}
