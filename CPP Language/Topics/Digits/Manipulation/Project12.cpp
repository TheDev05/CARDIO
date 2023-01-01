//** Print all strong numbers between the given interval using functions.

#include <iostream>

int fact(int n)
{
    if (n == 1)
    {
        return (1);
    }
    else
        return (n * fact(n - 1));
}

void check_strongnum(int n1, int n2)
{
    std::cout << "STRONG NUMBERS: ";
    for (int i = n1 + 1; i < n2; i++)
    {
        int rem, sum = 0, res_i = i;
        for (int j = 0; i != 0; j++)
        {
            rem = i % 10;
            sum += fact(rem);
            i = i / 10;
        }
        i = res_i;
        if (sum == i)
        {
            std::cout << i << " ";
        }
    }
}

int main()
{
    int num1, num2;

    std::cout << "ENTER INTERVALS: " << std::endl;
    std::cin >> num1 >> num2;

    check_strongnum(num1, num2);

    return (0);
}
