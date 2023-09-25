#include <bits/stdc++.h>
using namespace std;

int max_size = 1e5 + 1;
std::vector<bool> isPrime(max_size, true);

void fillPrime()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 0; i < max_size; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j < max_size; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    fillPrime();

    int n;
    std::cin >> n;

    std::cout << isPrime[n];
}