/* Vector Initialisation: 2D */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    /* Array of Vector */

    vector<int> num[3]; // --> int num[3];

    for (int i = 0; i < 3; i++)
    {
        int count;
        std::cin >> count;

        for (int j = 0; j < count; j++)
        {
            int val;

            std::cin >> val;
            num[i].push_back(val);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < num[i].size(); j++)
        {
            std::cout << num[i][j] << " ";
        }
        std::cout << '\n';
    }

    std::cout << '\n';

    for (auto i : num)
    {
        for (auto j : i)
        {
            std::cout << j << " ";
        }
        std::cout << '\n';
    }
}