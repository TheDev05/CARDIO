#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i][0] >> num[i][1];
    }

    std::sort(num.begin(), num.end());

    std::vector<std::vector<int>> storage(num.size() + 1, std::vector<int>(num.size() + 1, 0));
    for (int i = storage.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j < storage[0].size(); j++)
        {
            int val1 = 1, val2 = 0;
            if (j == 0 || num[j - 1][1] < num[i][0])
                if (i + 1 < storage[0].size())
                    val1 += storage[i + 1][i + 1];
            val2 = storage[i + 1][j];

            storage[i][j] = std::max(val1, val2);
        }
    }

    std::cout << storage[0][0];
}