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

    sort(num.begin(), num.end());

    int count = 1, delta = 0;
    for (int i = 0; i < num.size() - 1; i++)
    {
        delta += abs(num[i] - num[i + 1]);

        if (delta > k)
            count++, delta = 0;
    }

    std::cout << count;
}