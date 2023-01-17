#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i][0];
    }

    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i][1];
    }

    long long left = num[num.size() - 1][0], right = num[num.size() - 1][1];
    for (int i = num.size() - 2; i >= 0; i--)
    {
        long long val1 = num[i][0] + right;
        long long val2 = num[i][1] + left;

        left = std::max(left, val1);
        right = std::max(right, val2);
    }

    std::cout << max(left, right) << '\n';
}