#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<int> &num, std::vector<std::vector<int>> &storage, int k, int index)
{
    if (k == 0)
        return 0;

    if (index >= num.size())
        return 1e5;

    if (storage[index][k] == -1)
    {
        int val1 = 1e5, val2 = 1e5;
        if (k - num[index] >= 0)
            val1 = 1 + traverse(num, storage, k - num[index], index);
        val2 = traverse(num, storage, k, index + 1);

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
    int val = traverse(num, storage, k, 0);

    if(val==1e5) return -1;
    else return val;
}