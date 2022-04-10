#include <bits/stdc++.h>
using namespace std;

int foo(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
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
    int n;
    std::cin >> n;

    vector<int> pf;
    map<>

    while (n > 1)
    {
        int val = foo(n);
        while (n % val == 0)
        {
            n = n / val;
            pf.push_back(val);
        }
    }

    int prod = 1;
    for (auto i : pf)
        prod *= i;

    std::cout << prod;
}
