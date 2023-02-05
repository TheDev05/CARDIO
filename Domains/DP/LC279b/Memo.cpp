#include <bits/stdc++.h>
using namespace std;

int getCount(int index, std::vector<int> &num, std::vector<std::vector<int>> &storage, int n)
{
    if (index >= num.size())
    {
        if (n == 0)
            return 0;

        return 1e5;
    }

    if (storage[index][n] == -1)
    {
        int count1 = 1e5, count2 = 1e5;
        if (n - num[index] >= 0)
            count1 = 1 + getCount(index, num, storage, n - num[index]);

        count2 = getCount(index + 1, num, storage, n);

        storage[index][n] = std::min(count1, count2);
    }

    return storage[index][n];
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num;
    for (int i = 1; i <= n; i++)
    {
        double val = sqrt(i);
        if (ceil(val) == floor(val))
            num.push_back(i);
    }

    std::vector<std::vector<int>> storage(num.size(), std::vector<int>(n + 1, -1));
    std::cout << getCount(0, num, storage, n);
}