#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num;
    for (int i = 1; i <= n; i++)
    {
        double temp = sqrt(i);
        if (ceil(temp) == floor(temp))
            num.push_back(i);
    }

    std::vector<std::vector<int>> storage(num.size() + 1, std::vector<int>(n + 1, 1e7));
    storage[storage.size() - 1][0] = 0;

    for (int i = storage.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j < storage[0].size(); j++)
        {
            int val1 = 1e7, val2 = 1e7;
            if (j - num[i] >= 0)
                val1 = 1 + storage[i][j - num[i]];
            val2 = storage[i + 1][j];

            storage[i][j] = std::min(val1, val2);
        }
    }

    std::cout << storage[0][n];
}