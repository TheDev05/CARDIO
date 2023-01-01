/* Vector Initialisation: 2D */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    /* Array of Vector: Array size fixed but vector size can be modified */

    // vector<int> num[3]; // --> int num[3];

    // for (int i = 0; i < 3; i++)
    // {
    //     int count;
    //     std::cin >> count;

    //     for (int j = 0; j < count; j++)
    //     {
    //         int val;

    //         std::cin >> val;
    //         num[i].push_back(val);
    //     }
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < num[i].size(); j++)
    //     {
    //         std::cout << num[i][j] << " ";
    //     }
    //     std::cout << '\n';
    // }

    // std::cout << '\n';

    // for (auto i : num)
    // {
    //     for (auto j : i)
    //     {
    //         std::cout << j << " ";
    //     }
    //     std::cout << '\n';
    // }

    // std::cout << '\n';

    // /* Vector of Vector: Row & Dimension both can be modified */

    vector<vector<int>> node; // size not initialised along with

    for (int i = 0; i < 3; i++)
    {
        int count;
        std::cin >> count;

        vector<int> temp(count);
        for (int j = 0; j < count; j++)
        {
            int val;
            std::cin >> val;

            std::cout << val << " ";

            temp.push_back(val);
        }

        std::cout << '\n';

        node.push_back(temp);
    }

    // for (auto i : node)
    // {
    //     for (auto j : i)
    //     {
    //         std::cout << j << " ";
    //     }
    //     std::cout << '\n';
    // }

    // std::cout << '\n';

    // vector<vector<int>> node1(3); // size initialised along with
    // for (int i = 0; i < 3; i++)
    // {
    //     int count;
    //     std::cin >> count;

    //     for (int j = 0; j < count; j++)
    //     {
    //         int val;
    //         std::cin >> val;

    //         node1[i].push_back(val);
    //     }
    // }

    // for (auto i : node1)
    // {
    //     for (auto j : i)
    //     {
    //         std::cout << j << " ";
    //     }
    //     std::cout << '\n';
    // }

    // std::cout << '\n';

    // vector<vector<int>>node(3,vector<int>)
}