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

        std::vector<int> num(n), temp;

        int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            std::cin >> num[i];
            min = std::min(min, num[i]);
        }

        temp = num;
        sort(temp.begin(), temp.end());

        for (int i = 0; i < n; i++)
        {
            if (__gcd(min, num[i]) == min)
                num[i] = 0;
        }

        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (num[i] && num[i] != temp[i])
            {
                ok = false;
                break;
            }
        }

        if (ok)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
}