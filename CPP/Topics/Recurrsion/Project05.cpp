//** Print all even or odd numbers in given range using recursion

#include <iostream>

void even(int lim, int num)
{
    if (num % 2 == 0)
    {
        if (num > lim)
        {
            return;
        }

        else
        {
            std::cout << num << " ";
            even(lim, num + 1);
        }
    }

    else
    {
        even(lim, num + 1);
    }
}

void odd(int lim, int num)
{
    if (num % 2 != 0)
    {
        if (num > lim)
        {
            return;
        }

        else
        {
            std::cout << num << " ";
            odd(lim, num + 1);
        }
    }

    else
    {
        odd(lim, num + 1);
    }
}

int main()
{
    int limit, num = 0;

    std::cout << "ENTER INPUT LIMIT: " << std::endl;
    std::cin >> limit;

    std::cout << "EVEN NUMBERS TILL " << limit << std::endl;
    even(limit, num);

    std::cout << std::endl
              << "ODD NUMBERS TILL " << limit << std::endl;
    odd(limit, num);

    return (0);
}