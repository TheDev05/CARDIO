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
    for (auto i : num)
        right[i]++;

    int min = INT_MAX;
    for (int i = 0; i < num.size(); i++)
    {
        if (--right[num[i]] == 0)
            right.erase(num[i]);

        if (i && i < num.size() - 1)
        {
            if (left.begin()->first < num[i] && num[i] > right.begin()->first)
                min = std::min(min, (left.begin()->first + right.begin()->first + num[i]));
        }

        left[num[i]]++;
    }

    std::cout << min;
}