#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<std::pair<int, int>> &num, int temp, int index)
{
    if (index >= num.size())
        return 0;

    int val1 = 0, val2 = 0;
    if (num[index].second >= temp)
        val1 = num[index].second + getCount(num, num[index].second, index + 1);
    val2 = getCount(num, temp, index + 1);

    return std::max(val1, val2);
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num1(n), num2(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num1[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cin >> num2[i];
    }

    std::vector<std::pair<int, int>> num;
    for (int i = 0; i < n; i++)
    {
        num.push_back({num2[i], num1[i]});
    }

    sort(num.begin(), num.end());
    std::cout << getCount(num, 0, 0);
}