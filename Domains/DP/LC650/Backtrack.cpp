#include <bits/stdc++.h>
using namespace std;

int getCount(int val, int temp, int n)
{
    if (val == n)
        return 0;

    int val1 = 1e5, val2 = 1e5;

    if (val + temp <= n)
        val2 = 1 + getCount(val + temp, temp, n);
    if (temp != val)
        val1 = 1 + getCount(val, val, n);

    return std::min(val1, val2);
}

int main()
{
    int n;
    std::cin >> n;

    if (n == 1)
        std::cout << "0\n";

    std::cout << 1 + getCount(1, 1, n);
}