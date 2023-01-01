#include <bits/stdc++.h>
using namespace std;

int maxsize = 1e7 + 10;
vector<bool> isPrime(maxsize, true);

void fillprimes()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < maxsize; i++)
    {
        if (isPrime[i])
        {
            for (int j = (2 * i); j < maxsize; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    int n;
    std::cin >> n;

    fillprimes();

    if (isPrime[n])
    {
        std::cout << "YES\n";
    }
    else
        std::cout << "NO\n";
}