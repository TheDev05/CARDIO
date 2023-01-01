//**C program to find sum of following series:
// 1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N

#include <iostream>

int main()
{
    int count;

    std::cout << "ENTER OUTPUT LIMIT: " << std::endl;
    std::cin >> count;

    float sum = 0.0;
    for (int i = 1; i <= count; i++)
    {
        sum = sum + (1 / (float)i); //? Important casting.
    }

    std::cout << "SUM OF SERIES: " << sum;

    return (0);
}
