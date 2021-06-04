//**C++ Program to Convert a person's name in Abbreviated


#include <iostream>

int main()
{
    char fname[10], mname[10], lname[10];

    std::cout << "ENTER YOUR FIRST NAME: " << std::endl;
    std::cin >> fname;

    std::cout << "ENTER MIDDLE NAME: " << std::endl;
    std::cin >> mname;

    std::cout << "ENTER LAST NAME: " << std::endl;
    std::cin >> lname;

    std::cout << "ABBR: " << fname[0] << ". " << mname[0] << ". " << lname << std::endl;
    return (0);
}