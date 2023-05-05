#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> num(n);
        std::set<int> data;

        for (int i = 0; i < n; i++)
        {
            std::cin >> num[i];
            data.insert(num[i]);
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            data.erase(num[i]);
            if (data.size())
                sum = std::max(sum, num[i] + (*data.rbegin()));
            data.insert(num[i]);
        }

        std::cout << sum << '\n';
    }
}