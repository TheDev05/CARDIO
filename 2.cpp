#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    std::cin >> a >> b;

    if (a == 1 || b == 1)
    {
        std::cout << "No\n";
        return 0;
    }

    if (a % 2 == 0 && b % 2 == 0)
        std::cout << "YES\n";
    else if (a % 2 == 0 && (b & 1))
        std::cout << "YES\n";
    else if ((a & 1) && (b % 2 == 0))
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}