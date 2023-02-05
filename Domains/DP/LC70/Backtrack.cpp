#include <bits/stdc++.h>
using namespace std;

int getCount(int index, int n)
{
    if (index == n)
        return 1;

    int val1 = 0, val2 = 0;
    if (index + 1 <= n)
        val1 = getCount(index + 1, n);
    if (index + 2 <= n)
        val2 = getCount(index + 2, n);

    return val1 + val2;
}

int main()
{
    int n;
    std::cin >> n;

    std::cout << getCount(0, n);
}