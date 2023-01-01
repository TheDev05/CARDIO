//** C program to find sum of the square of all natural numbers from 1 to N.
// Series: 1^2+2^2+3^2+4^2+..N^2

#include <iostream>

int main()
{
    int count;
    std::cout << "ENTER OUTPUT LIMIT: " << std::endl;
    std::cin >> count;

    int sum = 0;
    for (int i = 1; i <= count; i++)
    {
        sum += i * i;
    }

    std::cout << "SUM OF SQAUES: " << sum;
    return (0);
}