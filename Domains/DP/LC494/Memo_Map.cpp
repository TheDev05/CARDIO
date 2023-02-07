#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, std::map<std::pair<int, int>, int> &storage, int k, int index)
{
    if (index >= num.size())
        return (k == 0) ? 1 : 0;

    if (storage.count({index, k}) == false)
    {
        int val1 = 0, val2 = 0;
        val1 = getCount(num, storage, k + num[index], index + 1);
        val2 = getCount(num, storage, k - num[index], index + 1);

        storage[{index, k}] = (val1 + val2);
    }

    return storage[{index, k}];
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

    int sum = 0;
    for (auto i : num)
        sum += i;

    // std::vector<std::vector<int>> storage(num.size(), std::vector<int>((sum + k) + 1, -1));

    std::map<std::pair<int, int>, int> storage;
    std::cout << getCount(num, storage, k, 0);
}