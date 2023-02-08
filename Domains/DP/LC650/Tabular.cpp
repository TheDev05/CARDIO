#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    if (n == 1)
        std::cout << "0\n";

    std::vector<std::vector<int>> storage(n + 1, std::vector<int>(n + 1, 0));
    for (int i = storage.size() - 2; i >= 0; i--)
    {
        for (int j = storage[0].size() - 1; j >= 0; j--)
        {
            int val1 = 1e5, val2 = 1e5;

            if (i + j <= n)
                val2 = 1 + storage[i + j][j];
            if (j != i)
                val1 = 1 + storage[i][i];

            storage[i][j] = std::min(val1, val2);
        }
    }

    std::cout << 1 + storage[1][1];
}