#include <bits/stdc++.h>
using namespace std;

int maxlimit = 1e5 + 10;
int main()
{
    vector<bool> isPrime(maxlimit, 1);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < maxlimit; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j < maxlimit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    
    int n;
    std::cin >> n;

    int count = 0;
    for (int i = 0; i < 1e5 && i < n; i++)
    {
        int index = n - (2 * i);
        if (isPrime[i] == true && isPrime[index] == true)
            count++;
    }

    std::cout << count << '\n';
}