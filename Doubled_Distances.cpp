#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    std::cin >> t;

    while (t--)
    {
        long long n;
        std::cin >> n;

        vector<long long> container(n), temporary;
        for (long long i = 0; i < n; i++)
        {
            std::cin >> container[i];
        }

        sort(container.begin(), container.end());

        for (long long i = 0; i < n - 1; i++)
        {
            long long diffrence = container[i + 1] - container[i];
            temporary.push_back(diffrence);
        }

        bool yell = false;
        for (long long i = 0; i < temporary.size() - 1; i++)
        {
            long long maxP = std::max(temporary[i], temporary[i + 1]);
            long long minP = std::min(temporary[i], temporary[i + 1]);

            if ((maxP / 2) != minP)
            {
                yell = true;
                break;
            }
        }

        if (yell)
        {
            std::cout << "No\n";
            continue;
        }

        std::cout << "Yes\n";
    }
}
