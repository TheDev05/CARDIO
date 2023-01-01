//* If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.
// https : //www.codechef.com/problems/FLOW004

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
        int n = num[i];
        int key = 1;
        int last_dig;
        int rem;

        for (int j = 0; n != 0; j++)
        {
            rem = n % 10;
            if (key == 1)
            {
                last_dig = rem;
                key = 0;
            }

            n = n / 10;
        }

        std::cout << last_dig + rem << std::endl;
    }

    return (0);
}