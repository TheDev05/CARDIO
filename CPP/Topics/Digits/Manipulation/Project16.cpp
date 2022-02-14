//**C program to find the sum of series 1^2/1! + 2^2/2! + 3^2/3! + 4^2/4! + ... n^2/n!.

#include <iostream>

float fact(float p)
{
    if (p == 1)
    {
        return (1);
    }

    else
    {
        return (p * fact(p - 1));
    }
}

int main()
{
    int count;
    std::cout << "ENTER OUTPUT LIMIT: " << std::endl;
    std::cin >> count;

    float sum = 0.0;
    for (int i = 1; i <= count; i++)
    {
        sum += (i * i) / fact(i);
    }

    std::cout << "SUM OF SERIES: " << sum << std::endl;
    return (0);
}