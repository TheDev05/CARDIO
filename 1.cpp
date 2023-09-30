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

    if (num[0] == num[n - 1])
    {
        std::cout << "0";
        return 0;
    }

    std::cout << ceil((double)n / k) + 1;
}