#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::map<int, int> data;
    int max = 0;

    for (int i = 0; i < num.size(); i++)
    {
        if (--data[num[i]] == 0)
            data.erase(num[i]);

        int inox = -1;
        auto it = data.upper_bound(num[i]);

        if (it != data.end())
            inox = it->first;

        max = std::max(max, inox - num[i]);
    }

    std::cout << max;
}