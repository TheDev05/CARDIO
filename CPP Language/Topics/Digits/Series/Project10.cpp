//**C program to find the sum of series x + x/2! + x/4! + ... + x/n!

#include <iostream>

float fact(float i)
{
    if (i == 1)
    {
        return (i);
    }
    else
    {
        return (i * fact(i - 1));
    }
}

int main()
{
    int n;
    float x;

    std::cout << "OUTPUT LIMIT: " << std::endl;
    std::cin >> n;

    std::cout << "ENTER VALUE OF X" << std::endl;
    std::cin >> x;

    float sum = 0.0;
    int j=1;
    for (int i = 1; i <= n; i++)
    {
        sum += x / fact(j);
        j = j * 2;
    }

    std::cout << "SUM OF SERIES: " << sum << std::endl;
    return (0);
}