//**C program to print Table of an Integer Number using User Define Functions.

#include <iostream>

void show_table(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        std::cout << num << "*" << i << "= " << num * i << std::endl;
    }
}

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    show_table(num);

    return (0);
}