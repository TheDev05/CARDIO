//**C Program to check number is perfect square or not.

#include <iostream>

check_perfectsquare(int num)
{
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0 && num / i == i)
        {
            return (1);
        }
    }

    return (0);
}

int main()
{
    int num;
    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    if (check_perfectsquare(num))
        std::cout << num << " IS PERFECT SQUARE";
    else
        std::cout << num << " IS NOT PERFECT SQUARE";

    return (0);
}