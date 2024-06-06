#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    int k;
    std::cin >> k;

    ranges::sort(num);

    int left = num[0][0], right = num[0][1];
    for (int i = 0; i < num.size(); i++)
    {
        if (left <= num[i][0] && num[i][0] <= right)
            right = std::max(right, num[i][1]);
        else
        {
            k = k - ((right - left) + 1);

            left = num[i][0];
            right = num[i][1];
        }
    }

    k = k - ((right - left) + 1);

    std::cout << k;
}