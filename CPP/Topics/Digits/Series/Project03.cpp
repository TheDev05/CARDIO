//**C program to find the sum of Natural Number/Factorial of Number of all natural numbers from 1 to N.
// Series: 1/1! + 2/2! + 3/3! + 4/4! + ... N/N!

#include <iostream>

float fact(int num)
{
    if (num == 1)
    {
        return (1);
    }

    else
    {
        return (num * fact(num - 1));
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
        sum += (i / (fact(i)));
    }

    std::cout << "SUM OF GIVEN SERIE IS: " << sum;
    return (0);
}