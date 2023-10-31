#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<int> num1(n), num2(m);
    for (auto &i : num1)
        std::cin >> i;

    for (auto &i : num2)
        std::cin >> i;

    int count1 = 0, count2 = 0;
    for (auto i : num1)
        if (i == 0)
            count1++;

    for (auto i : num2)
        if (i == 0)
            count2++;

    int sum1 = 0, sum2 = 0;
    sum1 = accumulate(begin(num1), end(num1), 0);
    sum2 = accumulate(begin(num2), end(num2), 0);

    if (sum1 == sum2 && std::max(count1, count2) == 0)
        std::cout << sum1;

    if (count1 == 0 && count2 == 0)
        std::cout << -1;

    if (count1)
        sum1 += (count1 - 1);
    if (count2)
        sum2 += (count2 - 1);

    if (count1 == 0)
    {
        if (sum2 < sum1)
            std::cout << sum1;
        std::cout << "-1";
    }

    if (count2 == 0)
    {
        if (sum1 >= sum2)
            std::cout << sum2;
        std::cout << "-1";
    }

    std::cout << std::max(sum1, sum2) + 1;
}
