#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, std::vector<std::vector<int>> &storage, bool buy, int index)
{
    if (index >= num.size())
        return 0;

    if (storage[index][buy] == -1)
    {
        if (buy)
        {
            int val1 = 0, val2 = 0;
            val1 = getCount(num, storage, 0, index + 1) - num[index];
            val2 = getCount(num, storage, buy, index + 1);

            storage[index][buy] = std::max(val1, val2);
        }
        else
        {
            int val1 = 0, val2 = 0;
            val1 = num[index] + getCount(num, storage, 1, index + 2);
            val2 = getCount(num, storage, buy, index + 1);

            storage[index][buy] = std::max(val1, val2);
        }
    }

    return storage[index][buy];
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

    std::vector<std::vector<int>> storage(num.size() + 1, std::vector<int>(2, 0));
    for (int i = storage.size() - 2; i >= 0; i--)
    {
        for (int j = 0; j < storage[0].size(); j++)
        {
            if (j)
            {
                int val1 = 0, val2 = 0;
                val1 = storage[i + 1][0] - num[i];
                val2 = storage[i + 1][j];

                storage[i][j] = std::max(val1, val2);
            }
            else
            {
                int val1 = num[i], val2 = 0;
                if (i + 2 < storage.size())
                    val1 += storage[i + 2][1];
                val2 = storage[i + 1][j];

                storage[i][j] = std::max(val1, val2);
            }
        }
    }

    std::cout << storage[0][1];
}