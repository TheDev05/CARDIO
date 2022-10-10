/* Sieve Practice */

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cout << "Enter your number to check for primes:\n";
    std::cin >> n;

    int max = 1e5 + 1;
    std::vector<bool> isPrime(max, 1);
    isPrime[0] = isPrime[1] = 0;

    for (int i = 2; i < max; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * 2; j < max; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    if (isPrime[n])
    {
        std::cout << "PRIME\n";
    }
    else
        std::cout << "NOT PRIME\n";

    return (0);
}