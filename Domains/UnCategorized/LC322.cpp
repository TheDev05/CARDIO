#include <bits/stdc++.h>
using namespace std;

int traverse(std::vector<int> &num, std::vector<std::vector<int>> &storage, int sum, int index)
{
    if (sum == 0)
        return 0;

    if (index >= num.size())
        return 1e5;

    if (storage[index][sum] == -1)
    {
        int val1 = 1e5, val2 = 1e5;
        if (sum - num[index] >= 0)
            val1 = 1 + traverse(num, storage, sum - num[index], index);
        val2 = traverse(num, storage, sum, index + 1);

        storage[index][sum] = std::min(val1, val2);
    }

    return storage[index][sum];
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int sum = 0;
    std::cin >> sum;

    std::vector<std::vector<int>> storage(num.size() + 1, std::vector<int>(sum + 1, -1));
    std::cout << traverse(num, storage, sum, 0);
}