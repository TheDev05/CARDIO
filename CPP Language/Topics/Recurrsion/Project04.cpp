//** Print all natural numbers between 1 to n using recursion.

#include <iostream>

int print_n(int num1, int num2)
{
    if (num2 > num1)
    {
        return (0);
    }

    else
    {
        std::cout << num2 << " ";
        print_n(num1, num2 + 1);
    }
    return (0);
}

int main()
{
    int num1, num2 = 1;

    std::cout << "ENTER YOUR LAST NUMBER, TILL YOU PRINT: " << std::endl;
    std::cin >> num1;

    print_n(num1, num2);

    return (0);
}