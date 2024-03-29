#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, std::vector<std::vector<int>> &storage, int k, int buy, int index)
{
    if (index >= num.size())
        return 0;

    if (storage[index][buy] == -1)
    {
        if (buy)
        {
            int val1 = 0, val2 = 0;
            val1 = (getCount(num, storage, k, 0, index + 1) - num[index]) - k;
            val2 = getCount(num, storage, k, buy, index + 1);

            storage[index][buy] = std::max(val1, val2);
        }
        else
        {
            int val1 = 0, val2 = 0;
            val1 = num[index] + getCount(num, storage, k, 1, index + 1);
            val2 = getCount(num, storage, k, buy, index + 1);

            storage[index][buy] = std::max(val1, val2);
        }
    }

    return storage[index][buy];
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

    std::vector<std::vector<int>> storage(num.size(), std::vector<int>(2, -1));
    std::cout << getCount(num, storage, k, 1, 0);

    
}