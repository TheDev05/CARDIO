#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, int index)
{
    if (index >= num.size())
        return 0;

    int val1 = 0, val2 = 0;
    for (int i = index + 2; i < num.size(); i++)
    {
        val1 = std::max(val1, getCount(num, i));
    }

    val2 = getCount(num, index + 1);

    return std::max(val1 + num[index], val2);
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