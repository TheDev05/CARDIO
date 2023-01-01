//**C Program to calculate SUM & PRODUCT of all digits.

#include <iostream>

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: \n";
    std::cin >> num;

    int rem, sum = 0, prod = 1;
    for (int i = 0; num != 1; i++)
    {
        rem = num % 10;
        sum += rem;
        prod *= rem;
        num = num / 10;
    }

    std::cout << "SUM: " << sum << std::endl
              << "PRODUCT: " << prod;
    return (0);
}