/* Find unique or odd repeted elemnt in even repeted vector */

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> num1 = {1, 1, 2, 2, 3, 3, 4, 5, 5};
    std::cout << "The unique element in even repeted vector is: \n";

    int sum = 0;
    for (int i = 0; i < num1.size(); i++)
    {
        sum ^= num1[i];
    }

    std::cout << sum << '\n';
}