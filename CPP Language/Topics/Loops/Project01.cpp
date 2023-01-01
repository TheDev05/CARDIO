//**C++Program To Calculate Factorial Of A Given Number Using Loop

#include <iostream>

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    int product = 1;

    for (int i = 1; i <= num; i++)
    {
        product = product * i;
    }

    std::cout << "FACTORIAL: " << product << std::endl;
    return (0);
}