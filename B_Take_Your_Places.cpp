#include <bits/stdc++.h>
using namespace std;

#define int long long

int result(std::vector<int> &num, std::set<int> even, std::set<int> odd, std::set<int> skip, bool toggle)
{
    int sum = 0, index = 0;
    int n = num.size(), count = 0;

    while (index < n)
    {
        while (skip.count(index) && index < n)
        {
            index++;
            count--;
        }

        if (index >= n)
            break;

        if (toggle == false && (num[index] & 1))
        {
            if (even.empty())
            {
                sum = INT_MAX;
                break;
            }

            sum += abs(index - *even.begin()) - count;

            skip.insert(*even.begin());
            even.erase(*even.begin());

            count++;
        }
        else if (toggle && num[index] % 2 == 0)
        {
            if (odd.empty())
            {
                sum = INT_MAX;
                break;
            }

            sum += abs(index - *odd.begin()) - count;

            skip.insert(*odd.begin());
            odd.erase(*odd.begin());

            count++;
        }
        else
        {
            even.erase(index);
            odd.erase(index);

            index++;
        }

        toggle = !toggle;
    }

    return sum;
}

int32_t main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> num(n);
        std::set<int> even, odd, skip;

        for (int i = 0; i < n; i++)
        {
            std::cin >> num[i];

            if (num[i] & 1)
                odd.insert(i);
            else
                even.insert(i);
        }

        if (n == 1)
        {
            std::cout << "0\n";
            continue;
        }

        if (abs((int)even.size() - (int)odd.size()) > 1)
        {
            std::cout << "-1\n";
            continue;
        }

        int sum1 = result(num, even, odd, skip, 0);
        int sum2 = result(num, even, odd, skip, 1);

        std::cout << std::min(sum1, sum2) << '\n';
    }
}