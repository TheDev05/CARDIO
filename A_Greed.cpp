#include <bits/stdc++.h>
using namespace std;

int cmp(std::pair<int, int> a, std::pair<int, int> b)
{
    return a.second > b.second;
}

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::pair<int, int>> num(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i].first;
    }

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i].second;
        sum += num[i].first;
    }

    sort(num.begin(), num.end(), cmp);

    if (sum > num[0].second + num[1].second)
        std::cout << "NO\n";
    else
        std::cout << "YES\n";
}