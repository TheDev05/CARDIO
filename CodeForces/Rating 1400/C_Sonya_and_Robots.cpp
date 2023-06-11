#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);

    std::map<int, int> data;
    std::set<int> res;

    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];

        data[num[i]]++;
        res.insert(num[i]);
    }

    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        data[num[i]]--;
        if (data[num[i]] == 0)
            data.erase(num[i]);

        if (res.count(num[i]))
            sum += data.size();

        res.erase(num[i]);
    }

    std::cout << sum << '\n';
}