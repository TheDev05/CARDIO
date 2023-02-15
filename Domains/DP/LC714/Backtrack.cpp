#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, int k, int buy, int index)
{
    if (index >= num.size())
        return 0;

    if (buy)
    {
        int val1 = 0, val2 = 0;
        val1 = (getCount(num, k, 0, index + 1) - num[index]) - k;
        val2 = getCount(num, k, buy, index + 1);

        return std::max(val1, val2);
    }
    else
    {
        int val1 = 0, val2 = 0;
        val1 = num[index] + getCount(num, k, 1, index + 1);
        val2 = getCount(num, k, buy, index + 1);

        return std::max(val1, val2);
    }
}

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];
    }

    std::cout << getCount(num, k, 1, 0);
}