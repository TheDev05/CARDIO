#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::set<int> left;
    std::map<int, int> right;

    for (auto i : num)
        right[i]++;

    int result = 0;
    for (int i = 0; i < num.size(); i++)
    {
        left.insert(num[i]);
        if (--right[num[i]] == 0)
            right.erase(num[i]);

        if (right.size() && *left.rbegin() > num[i])
            result = std::max(result, (*left.rbegin() - num[i]) * right.rbegin()->first);
    }

    std::cout << result;
}