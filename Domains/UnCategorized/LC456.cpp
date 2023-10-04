#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::map<int, int> left, right;
    bool ok = false;

    for (auto i : num)
        right[i]++;

    for (int i = 0; i < n; i++)
    {
        right[num[i]]--;
        if (right[num[i]] == 0)
            right.erase(num[i]);

        if (i > 0 && i < n - 1)
        {
            auto it1 = left.begin();
            auto it2 = right.upper_bound(it1->first);
            if (it1->first < num[i] && it2 != right.end() && it2->first < num[i])
            {
                ok = true;
                break;
            }
        }

        left[num[i]]++;
    }

    std::cout << ok;
}