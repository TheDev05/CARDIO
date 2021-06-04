//**C++ Program To Read Integer (N) And Print First Three Powers (N^1, N^2, N^3)

#include <iostream>
#include <cmath>

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    std::cout << "POWER 1: " << pow(float(num), 1) << std::endl
              << "POWER 2: " << num * num << std::endl
              << "POWER 3: " << num * num * num << std::endl;

    return (0);
}