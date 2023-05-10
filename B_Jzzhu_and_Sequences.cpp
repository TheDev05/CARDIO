#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n, c;
    std::cin >> a >> b >> n;

    c = b - a;

    int rem = n % 3, ans = 0;
    if (rem == 1)
    {
        ans = a;
        if (n % 2 == 0)
            ans = -a;
    }
    else if (rem == 2)
    {
        ans = b;
        if (n & 1)
            ans = -b;
    }
    else
    {
        ans = c;
        if (n % 2 == 0)
            ans = -c;
    }

    long long M = 1000000007;
    ans = ans % M;

    if (ans < 0)
        ans += M;
    std::cout << ans;
}