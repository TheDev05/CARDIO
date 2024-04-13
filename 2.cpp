#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> num[i];
    }

    std::map<int, int> data;
    for (auto i : num)
        data[i]++;

    int max = INT_MIN;
    for (int i = 0; i < num.size(); i++)
    {
        if (--data[num[i]] == 0)
            data.erase(num[i]);

        auto it = data.upper_bound(num[i]);
        if (it != data.end())
            std::cout << num[i],
                max = std::max(it->first - num[i], max);
    }

    if (max == INT_MIN)
        std::cout << "Not Possible";
    else
    {
        std::cout << "Possible\n";
        std::cout << max;
    }

    std::cout << max << '\n';
}
