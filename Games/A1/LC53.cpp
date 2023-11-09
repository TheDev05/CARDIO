#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int sum = 0, max = 0;
    for (int i = 0; i < num.size(); i++)
    {
        max = std::max(max, sum);
        if (sum + num[i] < num[i])
            sum = num[i];
        else
            sum += num[i];
    }

    std::cout << max;
}