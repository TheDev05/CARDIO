//**C++ Program To Compare Two String

#include <iostream>
#include <cstring>

int main()
{
    char str1[10], str2[20];

    std::cout << "ENTER FIRST STRING" << std::endl;
    std::cin.getline(str1, 10);

    std::cout << "ENTER SECOND STRING: " << std::endl;
    std::cin.getline(str2, 20);

    if (strcmp(str1, str2) == 0)
    {
        std::cout << "EQUAL" << std::endl;
    }

    else
        std::cout << "NOT EQUAL" << std::endl;
    return (0);
}