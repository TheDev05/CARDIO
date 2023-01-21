#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, std::vector<std::vector<int>> &storage, int k, int index)
{
    if (index >= num.size())
        return (k == 0) ? 1 : 0;

    if (storage[index][k] == -1)
    {
        int val1 = 0, val2 = 0;

        if (k - num[index] >= 0)
            val1 = getCount(num, storage, k - num[index], index + 1);
        if (k + num[index] < storage[0].size())
            val2 = getCount(num, storage, k + num[index], index + 1);

        storage[index][k] = val1 + val2;
    }

    return storage[index][k];
}

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    std::vector<std::vector<int>> storage(n, std::vector<int>(k + 1, -1));
    std::cout << getCount(num, storage, k, 0);
}