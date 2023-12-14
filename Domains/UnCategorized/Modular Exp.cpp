#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;

    // (a^b)%c

    auto get = [&](int a, int b, int c, auto &get)
    {
        if (b == 0)
            return 1;
        else if (b & 1)
            return ((a % c) * get(a, b - 1, c, get)) % c;
        else
        {
            int temp = get(a, b / 2, c, get);
            return (temp * temp) % c;
        }
    };

    std::cout << get(a, b, c, get);
}