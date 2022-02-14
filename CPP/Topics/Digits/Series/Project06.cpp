//**C program to calculate the sum of the series 1-2+3-4+5-6+7-8...N terms

#include <iostream>

int main()
{
    int count;

    std::cout << "ENTER OUTPUT LIMIT: " << std::endl;
    std::cin >> count;

    int sum = 0, index;

    for (int i = 1; i <= count; i++)
    {
        (i % 2 == 0) ? (index = -i) : (index = i);

        sum += index;
    }

    std::cout << "SUM OF SERIES: " << sum;
    return (0);
}