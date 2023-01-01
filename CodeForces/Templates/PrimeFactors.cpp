#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll foo(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return (i);
        }
    }

    return (n);
}

int main()
{
    ll n;
    std::cin >> n;

    while (n > 1)
    {
        ll val = foo(n);
        while (n % val == 0)
        {
            n = n / val;
            pf[val]++;
        }
    }

    for (auto i : pf)
        cout << i << " ";

    // ll prod = 1;
    // for (auto i : pf)
    //     prod *= i;

    // std::cout << prod;
}
