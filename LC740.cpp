#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, std::vector<std::vector<int>> &storage, int prev, int index)
{
    if (index >= num.size())
        return 0;

    if (storage[index][prev] == -1)
    {
        bool ok = false;
        if (prev == 0 || num[index] != num[prev - 1] + 1)
            ok = true;

        int val1 = 0, val2 = 0;
        if (ok)
            val1 = num[index] + getCount(num, storage, index + 1, index + 1);
        val2 = getCount(num, storage, prev, index + 1);

        storage[index][prev] = std::max(val1, val2);
    }

    return storage[index][prev];
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    sort(num.begin(), num.end());

    std::vector<std::vector<int>> storage(num.size(), std::vector<int>(num.size() + 1, -1));
    std::cout << getCount(num, storage, 0, 0);
}