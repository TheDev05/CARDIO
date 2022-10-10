//** Print all perfect numbers between the given interval using functions.

#include <iostream>

void print_perfectnum(int num1, int num2)
{
    std::cout << "PERFECT NUMBERS BETWEEN INTERVALS OF " << num1 << " AND " << num2 << " IS : " << std::endl;

    for (int i = num1 + 1; i < num2; i++)
    {
        int sum = 0;
        for (int j = 1; j < 10; j++)
        {
            if (i % j == 0 && j != i)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            std::cout << i << " ";
        }
    }
}

int main()
{
    int num1, num2;

    std::cout << "ENTER TWO INTERVALS: ";
    std::cin >> num1 >> num2;

    print_perfectnum(num1, num2);
    return (0);
}