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
        std::unordered_map<int, int> data;

        for (int i = 0; i < n; i++)
        {
            std::cin >> num[i];
            data[num[i]]++;
        }

        long long count = (n * (n - 1)) / 2;
        for (int i = 0; i < n; i++)
        {
            data[num[i]]--;
            count -= data[num[i]];

            if (data[num[i]] == 0)
                data.erase(num[i]);
        }

        std::cout << count << '\n';
    }
}