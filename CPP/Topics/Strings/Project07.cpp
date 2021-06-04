//**C++ Program To Copy One String To Another

#include <iostream>
#include <cstring>

int main()
{
    char str1[10], str2[10];

    std::cout << "ENTER LAST NAME: " << std::endl;
    std::cin.getline(str2, 10);

    strcpy(str1, str2); // last name is coping to first name.

    std::cout << "SIR NAME: " << str1 << std::endl;

    return (0);
}