//**C++ Program To Find Cube Of Any Number Using Functions

#include <iostream>
#include <cmath>
int cube(int);

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    std::cout << "CUBE OF " << num << " IS: " << cube(num) << std::endl;
    return (0);
}

int cube(int num)
{
    return (pow(num, 3));
}