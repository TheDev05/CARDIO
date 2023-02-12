#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, int sum, int index)
{
    if (index >= num.size())
        return (sum == 0 ? 1 : 0);

    if (getCount(num, sum - num[index], index + 1))
        return 1;
    if (getCount(num, sum, index + 1))
        return 1;

    return 0;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    int total = 0;
    for (auto i : num)
        total += i;

    if (total & 1)
    {
        std::cout << 0;
        return 0;
    }

    std::cout << getCount(num, total / 2, 0);
}