#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    int k;
    std::cin >> k;

    std::vector<std::vector<int>> num(n, std::vector<int>(m, 0));
    for (auto &i : num)
        for (auto &j : i)
            std::cin >> j;

    int count = 0;

    std::vector<int> temp(num.size(), 0);
    for (int p = 0; p < num[0].size(); p++)
    {
        for (int i = p; i < num[0].size(); i++)
        {
            int sum = 0;
            for (int j = 0; j < num.size(); j++)
            {
                sum += num[j][i];
                if (sum + temp[j] == k)
                    count++;

                temp[j] = sum + temp[j];
            }

            for (auto k : temp)
                std::cout << k << " ";
            std::cout << '\n';
        }

        temp.clear();
    }
}