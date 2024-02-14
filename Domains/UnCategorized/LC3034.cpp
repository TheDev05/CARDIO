#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<int> num(n), pattern(m);
    for (auto &i : num)
        std::cin >> i;

    for (auto &i : pattern)
        std::cin >> i;

    int count = 0;
    for (int i = 0; i < num.size(); i++)
    {
        int index = i;
        bool ok = true;

        for (int j = 0; j < pattern.size(); j++)
        {
            if (index + 1 >= num.size())
            {
                ok = false;
                break;
            }

            if (pattern[j] == 0 && num[index] == num[(index++) + 1])
                continue;
            if (pattern[j] == 1 && num[index] < num[(index++) + 1])
                continue;
            if (pattern[j] == -1 && num[index] > num[(index++) + 1])
                continue;

            ok = false;
            break;
        }

        if (ok)
            count++;
    }

    std::cout << count;
}