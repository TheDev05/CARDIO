#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        std::vector<int> num(3);
        std::cin >> num[0] >> num[1] >> num[2];

        std::sort(num.begin(), num.end());
        std::cout << num[1] << '\n';
    }
}