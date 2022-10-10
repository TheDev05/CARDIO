//* Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.

// LINK: https://www.codechef.com/problems/HS08TEST */

#include <iostream>
#include <iomanip>

int main()
{
    int withdraw;
    float cash;

    std::cin >> withdraw;
    std::cin >> cash;

    float threeshold = (float)withdraw + 0.50;

    if (threeshold > cash || withdraw % 5 != 0)
    {
        std::cout << std::fixed << std::setprecision(2) << cash << std::endl;
    }

    if (threeshold <= cash && withdraw % 5 == 0)
    {
        float diff = cash - threeshold;
        std::cout << std::fixed << std::setprecision(2) << diff << std::endl;
    }

    return (0);
}