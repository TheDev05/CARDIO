//**C program to find sum of following series:
// 1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3 + ... till N terms

#include <iostream>

int main()
{
    int count;

    std::cout << "ENTER OUTPUT LIMIT: " << std::endl;
    std::cin >> count;

    float sum = 0.0;
    int p = 1;
    
    for (int i = 1; i <= count; i++)
    {
        sum += (1 / (float)p);
        p = p + 2;
    }

    std::cout << "SUM OF GIVEN SERIES IS: " << sum;
    return (0);
}