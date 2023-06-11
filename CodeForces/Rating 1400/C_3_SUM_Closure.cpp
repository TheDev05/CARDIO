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

        std::vector<int> num(n), res;
        std::set<int> store;

        int zro = 0, pos = 0, neg = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin >> num[i];
            store.insert(num[i]);

            if (num[i] > 0)
                pos++;
            if (num[i] < 0)
                neg++;

            if (num[i] != 0)
                res.push_back(num[i]);
            else
                zro++;
        }

        std::sort(res.begin(), res.end());

        for (int i = 0; i < zro; i++)
            res.push_back(0);

        bool ok = true;
        for (int i = 0; i < std::min(n, 5); i++)
        {
            for (int j = i + 1; j < std::min(n, 5); j++)
            {
                for (int k = j + 1; k < std::min(n, 5); k++)
                {
                    if (store.count(res[i] + res[j] + res[k]) == false)
                        ok = false;
                }
            }
        }

        if (pos > 2 || neg > 2)
            ok = false;

        if (ok)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
}