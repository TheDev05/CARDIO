#include <iostream>

int gcd(int num1, int num2)
{
    if (num1 == 0)
    {
        return (num2);
    }

    return (gcd(num2 % num1, num1));
}

int main()
{
    int num1, num2;

    std::cout << "ENTER 2 NUMBES; " << std::endl;
    std::cin >> num1>> num2;

    std::cout << "GCD: " << gcd(num1, num2) << std::endl;
    return (0);
}