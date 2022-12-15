#include <bits/stdc++.h>
using namespace std;

long long getDiv(long long n)
{
    for (long long i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return (i);
    }

    return (n);
}

int main()
{
    long long n, temp;
    std::cin >> n;

    temp = n;
    std::vector<long long> data;
    while (1)
    {
        long long val = getDiv(n);
        if (val == n)
        {
            if (val != 1)
                data.push_back(val);
            break;
        }

        while (n % val == 0)
        {
            if (val != 1)
                data.push_back(val);
            n = n / val;
        }
    }

    // for (auto i : data)
    //     std::cout << i << " ";

    sort(data.begin(), data.end());

    if (data.size() <= 1)
    {
        std::cout << "1\n";
        std::cout << 0 << '\n';

        return (0);
    }

    long long sum = data[0] * data[1];
    if (temp != sum)
    {
        std::cout << "1\n";
        std::cout << sum << '\n';
    }
    else
        std::cout << "2\n";
}