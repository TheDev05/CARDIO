#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp(i + 1);
        for (auto &j : temp)
            std::cin >> j;

        num.push_back(temp);
    }

    std::vector<int> first(n, 0), second(n, 0);
    second = num[num.size() - 1];

    for (int i = num.size() - 2; i >= 0; i--)
    {
        for (int j = num[i].size() - 1; j >= 0; j--)
        {
            int val1 = 0, val2 = 0;

            val1 = second[j];
            val2 = second[j + 1];

            first[j] = std::min(val1, val2) + num[i][j];
        }

        second = first;
    }

    std::cout << first.front();
}