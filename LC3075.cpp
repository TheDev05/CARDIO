#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int k;
    std::cin >> k;

    ranges::sort(num);

    int sum = 0, temp = 0;
    for (int i = num.size() - 1; i >= 0; i--)
    {
        if (num[i] - temp > 0 && k)
            sum += num[i] - temp, k--;

        temp++;
    }

    std::cout << sum;
}