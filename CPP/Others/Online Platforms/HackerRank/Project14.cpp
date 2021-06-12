/* Two friends Anna and Brian, are deciding how to split the bill at a dinner. Each will only pay for the items they consume. Brian gets the check and calculates Anna's portion. You must determine if his calculation is correct.

https://www.hackerrank.com/challenges/bon-appetit/problem */

#include <iostream>

int main()
{
    int total_food_count;
    std::cout << "ENTER TOTAL ORDERED FOOD COUNT: " << std::endl;
    std::cin >> total_food_count;

    int food_cost[total_food_count];

    int food_not_consumed;
    std::cout << "ENTER THE INDEX OF FOOD ANNA HAS NOT CONSUMED: " << std::endl;
    std::cin >> food_not_consumed;

    int actual_cost = 0;
    std::cout << "ENTER COST FOR " << total_food_count << " ORDERED FOODS" << std::endl;
    for (int i = 0; i < total_food_count; i++)
    {
        std::cin >> food_cost[i];
        if (i != food_not_consumed)
        {
            actual_cost += food_cost[i];
        }
    }

    int charged_cost;
    std::cout << "ENTER THE CHARGED AMMOUNT ON ANNA BY BRAIN: " << std::endl;
    std::cin >> charged_cost;

    int shared_cost = actual_cost / 2;

    if (shared_cost == charged_cost)
    {
        std::cout << "Bon Appetit" << std::endl;
    }

    else
    {
        std::cout << "AMMOUNT PAYED BY ANNA:" << std::endl;
        std::cout << charged_cost - shared_cost;
    }

    return (0);
}