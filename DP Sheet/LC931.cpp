#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::vector<int>> &num, std::vector<std::vector<int>> &storage, int i, int j)
{
    if (j < 0 || j >= num[0].size())
        return 1e5;

    if (i == num.size() - 1)
        return num[i][j];
        
    if (storage[i][j] == -1)
    {

        int val1 = 0, val2 = 0, val3 = 0;
        val1 = num[i][j] + traverse(num, storage, i + 1, j - 1);
        val2 = num[i][j] + traverse(num, storage, i + 1, j + 1);
        val3 = num[i][j] + traverse(num, storage, i + 1, j);

        storage[i][j] = std::min({val1, val2, val3});
    }

    return storage[i][j];
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp(m);
        for (int j = 0; j < m; j++)
        {
            std::cin >> temp[j];
        }

        num.push_back(temp);
    }

    int min = INT_MAX;
    std::vector<std::vector<int>> storage(num.size(), std::vector<int>(num[0].size(), -1));
    for (int i = 0; i < num[0].size(); i++)
        min = std::min(min, traverse(num, storage, 0, i));

    std::cout << min;
}