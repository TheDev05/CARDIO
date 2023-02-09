#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> storage(n + 1, std::vector<int>(n + 1, 1));
    for (int i = storage.size() - 2; i >= 1; i--)
    {
        for (int j = 0; j < storage[0].size(); j++)
        {
            int val1 = 0, val2 = 0;
            if (j - i >= 0)
                val1 = i * storage[i][j - i];
            val2 = storage[i + 1][j];

            storage[i][j] = std::max(val1, val2);
        }
    }

    std::cout << storage[1][n];
}