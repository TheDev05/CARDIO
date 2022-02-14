//**C Program to check number is perfect or not.

#include <iostream>

int check_perfect(int num)
{
    int sum = 0;
    for (int i = 1; i < 10; i++)
    {
        if (num % i == 0 && i != num)
        {
            sum += i;
        }
    }

    if (sum == num)
    {
        return (1);
    }

    else
        return (0);
}

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    if (check_perfect(num))
    {
        std::cout << num << " IS PERFECT NUMBER" << std::endl;
    }

    else
        std::cout << num << " IS NOT A PERFECT NUMBER";

    return (0);
}