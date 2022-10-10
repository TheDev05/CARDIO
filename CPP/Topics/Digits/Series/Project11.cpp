//**C program to calculate the sum of the series 1^3 -2^3 + 3^3 - 4^3 + ... N^3

#include <iostream>

int main()
{
    int n;
    std::cout << "ENTER OUTPUT LIMIT: " << std::endl;
    std::cin >> n;

    float sum = 0.0;
    for (int i = 1; i <= n; i++)
    {
        int sign = (i % 2 == 0) ? -1 : 1;
        sum += (i * i * i) * sign;
    }

    std::cout << "SUM OF SERIES: " << sum;
    return (0);
}