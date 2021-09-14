//**C Program to check number is prime or not.

#include <iostream>

int check_prime(int num)
{
    int key = 0;
    for (int i = 1; i < 10; i++)
    {
        if (num % i == 0 && i != 1 && i != num)
        {
            key++;
        }
    }

    if (key != 0)
        return (0);
    else
        return (1);
}

int main()
{
    int num;

    std::cout << "ENTER YOUR NUMBER: " << std::endl;
    std::cin >> num;

    if (check_prime(num))

        std::cout << num << " IS PRIME NUMBER";

    else
        std::cout << num << " IS NOT A PRIME NUMBER";

    return (0);
}