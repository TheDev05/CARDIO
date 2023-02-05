#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, std::vector<int> &storage, int index)
{
    if (index >= num.size())
        return 0;

    if (storage[index] == -1)
    {
        int val1 = 0, val2 = 0;
        for (int i = index + 2; i < num.size(); i++)
        {
            val1 = std::max(val1, getCount(num, storage, i));
        }

        val2 = getCount(num, storage, index + 1);

        storage[index] = std::max(val1 + num[index], val2);
    }

    return storage[index];
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

    std::vector<int> storage(num.size(), -1);
    std::cout << getCount(num, storage, 0);
}