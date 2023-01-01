//**C Program to check number is power of 2 or not.

#include <iostream>

int check(int num)
{
    for (int i = 0; num != 1; i++)
    {
        if (num % 2 != 0)
        {
            return (0);
        }

        num = num / 2;
    }
    return (1);
}

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    if (check(num))
    {
        std::cout << num << " IS POWER OF TWO";
    }

    else
        std::cout << num << " IS NOT POWER OF 2";

    return (0);
}