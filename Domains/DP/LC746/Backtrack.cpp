#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<int> &num, int index)
{
    if (index >= num.size())
        return 0;

    int val1 = 0, val2 = 0;
    val1 = num[index] + getCount(num, index + 1);
    val2 = num[index] + getCount(num, index + 2);

    return std::min(val1, val2);
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

    std::cout << std::min(getCount(num, 0), getCount(num, 1));
}