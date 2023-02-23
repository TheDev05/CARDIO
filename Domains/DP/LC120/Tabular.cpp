#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<std::vector<int>> &num, std::vector<std::vector<int>> &storage, int index, int col)
{
    if (index >= num.size())
        return 0;

    if (storage[index][col] == -1)
    {
        int val1 = 0, val2 = 0;
        val1 = num[index][col] + traverse(num, storage, index + 1, col);
        val2 = num[index][col] + traverse(num, storage, index + 1, col + 1);

        storage[index][col] = min(val1, val2);
    }

    return storage[index][col];
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;

        std::vector<int> temp(m);
        for (int j = 0; j < m; j++)
        {
            std::cin >> temp[j];
        }

        num.push_back(temp);
    }

    std::vector<std::vector<int>> storage(num.size(), std::vector<int>(num[num.size() - 1].size(), -1));
    std::cout << traverse(num, storage, 0, 0);
}