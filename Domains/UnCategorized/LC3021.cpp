#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    std::cin >> n >> m;

    int temp = n;
    n = std::min(m, n);
    m = std::max(m, temp);

    int even = m / 2, odd = m / 2;

    if (m & 1)
        odd++;

    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i & 1)
            count += even;
        else
            count += odd;
    }

    std::cout << count;
}