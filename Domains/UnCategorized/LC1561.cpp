#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    ranges::sort(num, greater());
    int sum = 0, count = num.size() / 3;

    for (int i = 0; i < num.size(); i++)
        if ((i & 1) && count)
            sum += num[i], count--;

    std::cout << sum;
}