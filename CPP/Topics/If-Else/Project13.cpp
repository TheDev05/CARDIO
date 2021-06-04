//**C++ Program To Check Year Is Leap Year Or Not Using If/Else Statements

#include <iostream>

int main()
{
    int year;

    std::cout << "ENTER YOUR YEAR: " << std::endl;
    std::cin >> year;

    if (year % 4 == 0 || year % 4 == 100) //? or year%4==0||year%400==0
    {
        std::cout << year << " IS LEAP YEAR." << std::endl;
    }

    else
        std::cout << year << " IS NOT A LEAP YEAR." << std::endl;
    return (0);
}