#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<std::pair<int, int>> &num, std::vector<std::vector<int>> &storage, int temp, int index)
{
    if (index >= num.size())
        return 0;

    if (storage[index][temp] == -1)
    {
        int val1 = 0, val2 = 0;
        if (temp == 0 || num[index].second >= num[temp - 1].second)
            val1 = num[index].second + getCount(num, storage, index + 1, index + 1);
        val2 = getCount(num, storage, temp, index + 1);

        storage[index][temp] = std::max(val1, val2);
    }

    return storage[index][temp];
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num1(n), num2(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num1[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cin >> num2[i];
    }

    std::vector<std::pair<int, int>> num;
    for (int i = 0; i < n; i++)
    {
        num.push_back({num2[i], num1[i]});
    }

    sort(num.begin(), num.end());

    std::vector<int> prev(num.size() + 1, 0), curr(num.size() + 1, 0);
    for (int i = num.size() - 1; i >= 0; i--)
    {
        for (int j = prev.size() - 2; j >= 0; j--)
        {
            int val1 = 0, val2 = 0;
            if (j == 0 || num[i].second >= num[j - 1].second)
                val1 = num[i].second + prev[i + 1];
            val2 = prev[j];

            curr[j] = std::max(val1, val2);
        }

        prev = curr;
    }

    std::cout << curr[0];
}