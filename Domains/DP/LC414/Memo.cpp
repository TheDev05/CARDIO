#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, std::vector<std::vector<int>> &storage, int sum, int index)
{
    if (index >= num.size())
        return (sum == 0 ? 1 : 0);

    if (storage[index][sum] == -1)
    {
        if (getCount(num, storage, sum - num[index], index + 1))
            return 1;
        if (getCount(num, storage, sum, index + 1))
            return 1;

        storage[index][sum] = 0;
    }

    return storage[index][sum];
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

    int total = 0;
    for (auto i : num)
        total += i;

    if (total & 1)
        return 0;

    std::vector<std::vector<int>> storage(num.size() + 1, std::vector<int>(total + 1, 0));
    std::cout << getCount(num, storage, total / 2, 0);
}