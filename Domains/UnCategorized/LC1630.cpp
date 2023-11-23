#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int s, t;
    std::cin >> s >> t;

    std::vector<int> l(s), r(t);
    for (auto &i : l)
        std::cin >> i;

    for (auto &i : r)
        std::cin >> i;

    std::vector<bool> res;
    for (int i = 0; i < l.size(); i++)
    {
        std::multiset<int> temp;
        for (int j = l[i]; j <= r[i]; j++)
            temp.insert(num[j]);

        if (temp.size() == 1)
        {
            res.push_back(true);
            continue;
        }

        auto it = temp.begin();
        int d = 0, prev = 0, inox = *it++;

        d = *it - inox;
        bool ok = false;

        for (auto k : temp)
        {
            if (!ok)
                prev = k, ok = true;
            else if (k - prev != d)
            {
                ok = false;
                break;
            }

            prev = k;
        }

        if (ok)
            res.push_back(true);
        else
            res.push_back(false);
    }

    for (auto i : res)
        std::cout << i << " ";

    // 1 2 3 4
}