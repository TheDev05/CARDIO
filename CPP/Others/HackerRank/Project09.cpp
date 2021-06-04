/*You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age. They will only be able to blow out the tallest of the candles. Count how many candles are tallest.

https://www.hackerrank.com/challenges/birthday-cake-candles/problem
*/

#include <iostream>

int main()
{
    int count;

    std::cout << "ENTER CANDLES LIMIT: " << std::endl;
    std::cin >> count;

    int num[count];

    std::cout << "ENTER HEIGHT OF CANDLES: " << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    int temp = num[0];

    for (int i = 0; i < count; i++) //* FINDING MAXIMUM HEIGHTED CANDLE
    {
        if (temp < num[i])
        {
            temp = num[i];
        }
    }

    int occurence_count = 0;
    for (int i = 0; i < count; i++) //* FINDIND OCCURENCE OF MAXIMUM HEIGHTED CANDLE
    {
        if (temp == num[i])
        {
            occurence_count++;
        }
    }
    std::cout << "MAXIMUM HEIGHTED CANDLE OCCURES TOTAL " << occurence_count << " TIMES" << std::endl;
    return (0);
}