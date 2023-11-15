#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    sort(begin(num), end(num));
    num[0] = 1;

    for (int i = 1; i < num.size(); i++)
    {
        if (num[i] > num[i - 1])
            num[i] = num[i - 1] + 1;
    }

    for (auto i : num)
        std::cout << i << " ";
}