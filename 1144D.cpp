#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    map<int, int> data, inox;
    std::vector<pair<int, pair<int, int>>> res;

    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];

        data[num[i]]++;
        inox[num[i]] = i;
    }

    int val, max = INT_MIN;
    for (auto i : data)
    {
        if (max < i.second)
        {
            max = i.second;
            val = i.first;
        }
    }

    int index = inox[val];
    for (int i = index; i < n - 1; i++)
    {
        if (num[i] == num[i + 1])
            continue;
        else if (num[i] != val)
        {
            if (num[i] < val)
                res.push_back({1, {i, i + 1}});
            else
                res.push_back({2, {i, i + 1}});
        }
        else
        {
            if (num[i + 1] < val)
                res.push_back({1, {i + 1, i}});
            else
                res.push_back({2, {i + 1, i}});
        }

        num[i] = val;
        num[i + 1] = val;
    }

    for (int i = index; i > 0; i--)
    {
        if (num[i] == num[i - 1])
            continue;
        else if (num[i] != val)
        {
            if (num[i] < val)
                res.push_back({1, {i, i - 1}});
            else
                res.push_back({2, {i, i - 1}});
        }
        else
        {
            if (num[i - 1] < val)
                res.push_back({1, {i - 1, i}});
            else
                res.push_back({2, {i - 1, i}});
        }

        num[i] = val;
        num[i - 1] = val;
    }

    std::cout << res.size() << '\n';
    for (auto i : res)
        std::cout << i.first << " " << i.second.first + 1 << " " << i.second.second + 1 << "\n";
}