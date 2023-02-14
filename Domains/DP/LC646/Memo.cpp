#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<std::vector<int>> &num, std::vector<std::vector<int>> &storage, int prevIndex, int index)
{
    if (index >= num.size())
        return 0;

    if (storage[index][prevIndex] == -1)
    {
        int val1 = 0, val2 = 0;
        if (prevIndex == 0 || num[prevIndex - 1][1] < num[index][0])
            val1 = 1 + getCount(num, storage, index + 1, index + 1);
        val2 = getCount(num, storage, prevIndex, index + 1);

        storage[index][prevIndex] = std::max(val1, val2);
    }

    return storage[index][prevIndex];
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i][0] >> num[i][1];
    }

    std::sort(num.begin(), num.end());

    std::vector<std::vector<int>> storage(num.size(), std::vector<int>(num.size(), -1));
    std::cout << getCount(num, storage, 0, 0);
}