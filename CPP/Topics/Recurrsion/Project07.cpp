//**● Find the sum of all even or odd numbers in a given range using recursion.

#include <iostream>

int sum_even(int lim1, int lim2)
{
    int sum = 0;
    if (lim1 % 2 == 0)
    {
        if (lim1 > lim2)
        {
            return (0);
        }

        else
        {
           
            sum += lim1 + sum_even(lim1 + 1, lim2);
            return (sum);
        }
    }

    else
        return (sum_even(lim1 + 1, lim2));
}

int sum_odd(int lim1, int lim2)
{
    int sum = 0;

    if (lim1 % 2 != 0)
    {
        if (lim1 > lim2)
        {
            return (0);
        }

        else
        {
            sum += lim1 + sum_odd(lim1 + 1, lim2);
            return (sum);
        }
    }

    else
        return (sum_odd(lim1 + 1, lim2));
}

int main()
{
    int lim1, lim2;

    std::cout << "ENTER STARTING RANGE THEN ENDING RANGE: " << std::endl;
    std::cin >> lim1 >> lim2;

    std::cout << "SUM OF ALL EVEN NOs BETWEEN " << lim1 << " AND " << lim2 << " IS: " << sum_even(lim1, lim2);
    std::cout << std::endl;
    std::cout << "SUM OF ALL ODD NOs BETWEEN " << lim1 << " AND " << lim2 << " IS: " << sum_odd(lim1, lim2);

    return (0);
}