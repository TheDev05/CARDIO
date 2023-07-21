#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::vector<int>> &num, std::vector<std::vector<int>> &storage, int i, int j)
{
    if (i == num.size() - 1 && j == num[0].size() - 1)
        return 1;

    if (storage[i][j] == -1)
    {
        int min = 1e5;
        for (int p = -1; p <= 1; p++)
        {
            for (int q = -1; q <= 1; q++)
            {
                int nrow = i + p;
                int ncol = j + q;

                if (i == nrow && j == ncol)
                    continue;

                if (nrow >= 0 && nrow < num.size() && ncol >= 0 && ncol < num[0].size() && num[nrow][ncol] == 0)
                {
                    num[i][j] = 1;
                    min = std::min(min, traverse(num, storage, nrow, ncol));
                    std::cout << min << '\n';

                    num[i][j] = 0;
                }
            }
        }

        storage[i][j] = 1 + min;
    }

    return storage[i][j];
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp(n);
        for (auto &j : temp)
            std::cin >> j;

        num.push_back(temp);
    }

    std::vector<std::vector<int>> storage(num.size(), std::vector<int>(num[0].size(), -1));
    int result = traverse(num, storage, 0, 0);

    if (result == 1e5 + 1)
        std::cout << "-1\n";
    else
        std::cout << result;
}