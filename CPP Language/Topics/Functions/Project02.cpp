//**C++ Program To Perform All Arithmetic Operations Using Functions

#include <iostream>

int add(int num1, int num2)
{
    return (num1 + num2);
}

int sub(int num1, int num2)
{
    int temp;

    (num2 > num1) ? (temp = 0) : (temp = num1, num1 = num2, num2 = temp);
    return (num2 - num1);
}

int mun(int num1, int num2)
{
    return (num1 * num2);
}

int divide(int num1, int num2)
{
    int temp;
    (num2 > num1) ? (temp = 0) : (temp = num1, num1 = num2, num2 = temp);

    return (num2 / num1);
}

int main()
{
    int num1, num2;

    std::cout << "ENTER TWO NUMBER: " << std::endl;
    std::cin >> num1 >> num2;

    std::cout << "ADDITION: " << add(num1, num2) << std::endl;
    std::cout << "SUBTRACTION: " << sub(num1, num2) << std::endl;
    std::cout << "MUNTIPLICATIO: " << mun(num1, num2) << std::endl;
    std::cout << "DIVISON: " << divide(num1, num2) << std::endl;

    return (0);
}