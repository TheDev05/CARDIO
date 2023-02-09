#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, bool pos, int index)
{
    if (index >= num.size())
        return 0;

    int val = 0;
    for (int i = index + 1; i < num.size(); i++)
    {
        bool ok = false;
        if (num[i] - num[index] > 0)
            ok = 1;
        else if (num[i] - num[index] < 0)
            ok = 0;
        else
           continue;

        if (index == 0 || pos != ok)
            val = std::max(val, getCount(num, ok, i));
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

    std::cout << getCount(num, 1, 0);
}