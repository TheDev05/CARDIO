//**C program to calculate power of a number using recursion.

#include <iostream>

int find_square(int num, int power)
{
    int prod = 1;
    if (power == 1)
    {
        return (num);
    }

    else
    {
        prod *= num * find_square(num, power - 1);
        return (prod);
    }
}

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    int power;

    std::cout << "ENTER WHAT POWER YOU WANNA FIND OF " << num << std::endl;
    std::cin >> power;

    std::cout << "POWER OF " << num << " IS: " << find_square(num, power);
    return (0);
}