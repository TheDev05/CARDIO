
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    const long long maxlimit = 1e7 + 10;

    vector<bool> num(maxlimit, true);
    num[0] = num[1] = false;

    for (int i = 2; i < maxlimit; i++)
    {
        if (num[i] == true)
        {
            for (int j = i * 2; j < maxlimit; j += i)
            {
                num[j] = false;
            }
        }
    }

    while (t--)
    {
        long long n;
        std::cin >> n;

        if ((ceil)(sqrt((double)n)) == (sqrt((double)n)) && num[sqrt(n)] == true)
        {
            std::cout << "YES\n";
        }
        else
            std::cout << "NO\n";
    }
}