#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<std::pair<int, int>> &num, std::vector<std::vector<std::vector<int>>> &storage, int zero, int one, int index)
{
    if (index >= num.size())
        return 0;

    if (storage[index][zero][one] == -1)
    {
        int val1 = 0, val2 = 0;
        if (num[index].first <= zero && num[index].second <= one)
            val1 = 1 + getCount(num, storage, zero - num[index].first, one - num[index].second, index + 1);
        val2 = getCount(num, storage, zero, one, index + 1);

        storage[index][zero][one] = std::max(val1, val2);
    }

    return storage[index][zero][one];
}

int main()
{
    int n, a, b;
    std::cin >> n >> a >> b;

    std::vector<std::string> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    std::vector<std::pair<int, int>> data;
    for (auto i : num)
    {
        int zero = 0, one = 0;
        for (auto j : i)
        {
            if (j == '0')
                zero++;
            else
                one++;
        }

        data.push_back({zero, one});
    }

    std::vector<std::vector<std::vector<int>>> storage(num.size(), std::vector<std::vector<int>>(a + 1, std::vector<int>(b + 1, -1)));
    std::cout << getCount(data, storage, a, b, 0);
}