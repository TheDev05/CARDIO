#include <bits/stdc++.h>
using namespace std;

int getCount(int k, int n, int index)
{
    if (index > n)
        return (k == 0) ? 0 : 1e7;

    int val1 = 1e7, val2 = 1e7;
    double temp = sqrt(index);

    if (ceil(temp) == floor(temp) && k - index >= 0)
        val1 = 1 + getCount(k - index, n, index);
    val2 = getCount(k, n, index + 1);

    return std::min(val1, val2);
}

int main()
{
    int n;
    std::cin >> n;

    std::cout << getCount(n, n, 1);
}