/* Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.

LINK: https://www.codechef.com/problems/FLOW005
*/


#include <iostream>
int main()
{
    int count;
    std::cin >> count;

    int num[count];
    for (int i = 0; i < count; i++)
    {
        std::cin >> num[i];
    }

    for (int i = 0; i < count; i++)
    {
        int value = num[i];
        int total_notes = 0;

        if (value >= 100)
        {
            total_notes += (value / 100);
            value = (value % 100); //value is updated to reamining ammount
        }

        if (value >= 50)
        {
            total_notes += (value / 50);
            value = (value % 50);
        }

        if (value >= 10)
        {
            total_notes += (value / 10);
            value = (value % 10);
        }

        if (value >= 5)
        {
            total_notes += (value / 5);
            value = (value % 5);
        }

        if (value >= 2)
        {
            total_notes += (value / 2);
            value = (value % 2);
        }

        if (value >= 1)
        {
            total_notes += (value / 1);
            value = (value % 1);
        }

        std::cout << total_notes << std::endl;
    }

    return (0);
}