#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, int index)
{
    if (index == num.size() - 1)
        return 0;

    int val = 1e5;
    for (int i = 1; i <= num[index]; i++)
    {
        if (index + i < num.size())
            val = std::min(val, getCount(num, index + i));
    }

    return 1 + val;
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

    std::cout << getCount(num, 0);
}