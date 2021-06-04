//** Sum of all natural numbers between 1 to n using recursion.

#include <iostream>

int sum(int lim, int num)
{
    int add = 0;

    if (num > lim)
    {
        return (0);//0 RETURNS AND PUT AT LAST RECURSSION AS SUM VALUE..BUT ADDITON HAVE NO EFFECT WITH 0.
    }
    else
    {
        add += num + sum(lim, num + 1);
    }

    return (add);
}

int main()
{
    int lim, num = 0;

    std::cout << "ENTER YOUR OUTPUT LIMIT: " << std::endl;
    std::cin >> lim;

    std::cout << "SUM 0F ALL NATURAL NUMBER TILL " << lim << " IS: " << sum(lim, num);
    return (0);
}