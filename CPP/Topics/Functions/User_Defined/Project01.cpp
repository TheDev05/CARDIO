//* C program to find SUM and AVERAGE of two integer Numbers using User Define Functions.

#include <iostream>

float avg(float n1, float n2)
{
    return ((n1 + n2) / 2);
}

int sum(int n1, int n2)
{
    return (n1 + n2);
}

int main()
{
    int num1, num2;
    std::cout << "ENTER 2 NUMBERS: " << std::endl;
    std::cin >> num1 >> num2;

    std::cout << "AVERAGE OF " << num1 << " AND " << num2 << " IS: " << avg(num1, num2) << std::endl;

    std::cout << "SUM OF " << num1 << " AND " << num2 << " IS: " << sum(num1, num2) << std::endl;
    return (0);
}
