#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<std::pair<int, int>> num(n), temp;
    std::map<int, int, greater<>> data;

    for (auto &i : num)
        std::cin >> i.first;

    for (auto &i : num)
    {
        std::cin >> i.second;
        data[i.second]++;
    }

    temp = num;

    std::sort(num.begin(), num.end(), greater<>());
    std::map<int, int> result;

    for (int i = 0; i < n; i++)
    {
        data[num[i].second]--;
        if (data[num[i].second] == 0)
            data.erase(num[i].second);

        long long sum = num[i].second, count = k;
        for (auto j : data)
        {
            if (j.second >= count)
            {
                sum += count * j.first;
                count = 0;
            }
            else
            {
                sum += j.first * j.second;
                count -= j.second;
            }

            if (count == 0)
                break;
        }

        result[num[i].first] = sum;
    }

    for (auto i : temp)
        std::cout << result[i.first] << " ";
}