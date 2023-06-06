#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, k;
        std::cin >> k >> n;

        std::vector<int> num(n);
        std::map<int, int> data;

        for (auto &i : num)
        {
            std::cin >> i;
            data[i]++;
        }

        if (k == 1)
        {
            std::cout << n << '\n';
            continue;
        }

        std::vector<int> res;
        for (auto i : data)
            res.push_back(i.second);

        std::sort(res.begin(), res.end(), greater<int>());
        int sum = 0, temp = res[0];

        if (res.size() > 1)
        {
            sum += res[1];
            temp -= res[1];
        }

        if (temp)
        {
            sum += 2 * (temp / 3);
            if (temp % 3 == 1)
                sum++;
            else if (temp % 3 > 1)
                sum += 2;
        }

        std::cout << sum << '\n';
    }
}