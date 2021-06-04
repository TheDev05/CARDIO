/* A person wants to determine the most expensive computer keyboard and USB drive that can be purchased with a give budget. Given price lists for keyboards and USB drives and a budget, find the cost to buy them. If it is not possible to buy both items, return .
https://www.hackerrank.com/challenges/electronics-shop/problem */

#include <iostream>

int main()
{
    int b, k, d;

    std::cout << "ENTER BUDGET THEN KEYBOARD COUNT THEN DRIVERS COUNT" << std::endl;
    std::cin >> b >> k >> d;

    int knum[k], dnum[d];

    std::cout << "ENTER KEYBOARD COSTS: " << std::endl;
    for (int i = 0; i < k; i++)
    {
        std::cin >> knum[i];
    }

    std::cout << "ENTER DRIVERS COSTS: " << std::endl;
    for (int i = 0; i < d; i++)
    {
        std::cin >> dnum[i];
    }

    int temp = 0;
    int key = 0;
    for (int i = 0; i < k; i++)
    {

        for (int j = 0; j < d; j++)
        {
            int sum = 0;

            sum = knum[i] + dnum[j];

            if ((b >= sum) && (sum > temp))
            {
                key++;

                temp = sum;
            }
        }
    }

    if (key == 0)
    {
        std::cout << "-1";
        return (0);
    }

    std::cout << temp;
    return (0);
}