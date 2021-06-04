//**C program to calculate the sum of the series 1+(1+2) +(1+2+3) +(1+2+3+4) +...+(1+2+3+...+n)

#include <iostream>

int series_sum(int count)
{
    int sum = 0;
    for (int i = 1; i <= count; i++)
    {
        sum += i;
    }

    return (sum);
}

int main()
{
    int count;

    std::cout << "ENTER OUTPUT LIMIT: " << std::endl;
    std::cin >> count;

    int sum = 0;
    for (int i = 1; i <= count; i++)
    {
        sum += series_sum(i);
    }

    std::cout << "SUM OS SERIES: " << sum;
    return (0);
}