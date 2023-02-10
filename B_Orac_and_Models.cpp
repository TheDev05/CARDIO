#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, std::vector<int> &storage, int prev, int index)
{
    if (index >= num.size())
        return 0;

    if (prev == 0 || (index % prev == 0 && num[prev] < num[index]))
    {
        if (storage[index] == -1)
        {
            int val1 = 0, val2 = 0;

            val1 = 1 + getCount(num, storage, index, index + 1);
            val2 = getCount(num, storage, prev, index + 1);

            storage[index] = std::max(val1, val2);
        }

        return storage[index];
    }
    else
        return (getCount(num, storage, prev, index + 1));
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> num(n + 1);
        for (int i = 1; i <= n; i++)
        {
            std::cin >> num[i];
        }

        std::vector<int> storage(n + 1, -1);
        std::cout << getCount(num, storage, 0, 1) << '\n';
    }
}