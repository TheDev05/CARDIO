#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Sieive Practiec: Rivison */

    const long long maxlimit = 1e7 + 10;
    vector<bool> isPrime(maxlimit, true);

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < maxlimit; i++)
    {
        if (isPrime[i] == true)
        {
            for (int j = i * 2; j < maxlimit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    int check;
    std::cin >> check;

    std::cout << (isPrime[check] ? "prime\n" : "not a prime\n");
}