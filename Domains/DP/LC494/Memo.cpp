#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, std::vector<std::vector<int>> &storage, int temp, int sum, int k, int index)
{
    if (index >= num.size())
        return ((sum - temp) - temp == k) ? 1 : 0;

    if (storage[index][temp] == -1)
    {
        int val1 = 0, val2 = 0;

        val1 = getCount(num, storage, temp + num[index], sum, k, index + 1);
        val2 = getCount(num, storage, temp, sum, k, index + 1);

        storage[index][temp] = (val1 + val2);
    }

    return storage[index][temp];
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

    std::vector<std::vector<int>> storage(num.size(), std::vector<int>(sum + 1, -1));
    std::cout << getCount(num, storage, 0, sum, k, 0);
}