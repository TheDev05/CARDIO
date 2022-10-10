//**C program to calculate sum of the series 1 + 11 + 111 + 1111 + ... N terms.

#include <iostream>

int main()
{
    int n;
    std::cout << "ENTER OUTPUT LIMIT: " << std::endl;
    std::cin >> n;

    int sum = 0.0;
    int dig_position = 1, val_inc = 1;

    for (int i = 1; i <= n; i++)
    {
        sum += val_inc;
        
        dig_position = dig_position * 10;
        val_inc = val_inc + dig_position;
    }

    std::cout << "SUM OF SERIES: " << sum << std::endl;
    return (0);
}