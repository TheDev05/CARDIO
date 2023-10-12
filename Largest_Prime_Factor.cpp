#include <bits/stdc++.h>
using namespace std;

int getFactor(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return i;

    return n;
}

int main()
{
    int n;
    std::cin >> n;

    int max = 0;
    while (1)
    {
        int temp = getFactor(n);
        max = std::max(max, temp);

        while (n > temp && n % temp == 0)
            n = n / temp;

        if (temp == n)
            break;
    }

    std::cout << max;
}