/* Vector Intitialisation: 1D */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> num;

    for (int i = 0; i < 5; i++)
    {
        std::cin >> num[i]; //Wrong currently num has size 0.

        // int val;
        // std::cin >> val;

        // num.push_back(val);
    }

    vector<int> res(5);

    for (int i = 0; i < 5; i++)
    {
        std::cin >> res[i];
    }

    for (auto i : num)
        std::cout << i << " ";

    std::cout << '\n';

    for (auto i : res)
        std::cout << i << " ";

}