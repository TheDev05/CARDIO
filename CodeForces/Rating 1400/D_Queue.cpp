#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::sort(num.begin(), num.end());

    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum <= num[i])
            sum += num[i];
        else
            count++;
    }

    std::cout << n - count << '\n';
}