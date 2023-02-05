#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, std::vector<std::vector<int>> &storage, int k, int index)
{
    if (index >= num.size())
        return (k == 0) ? 0 : 1e5;

    if (storage[index][k] == -1)
    {
        int val1 = 1e5, val2 = 1e5;
        if (k - num[index] >= 0)
            val1 = 1 + getCount(num, storage, k - num[index], index);
        val2 = getCount(num, storage, k, index + 1);

        storage[index][k] = std::min(val1, val2);
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

    std::vector<std::vector<int>> storage(num.size(), std::vector<int>(k + 1, -1));
    std::cout << getCount(num, storage, k, 0);
}