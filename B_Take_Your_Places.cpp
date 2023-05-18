// @thedev05
#include <bits/stdc++.h>
using namespace std;

int foo(std::vector<int> &num)
{
    int n = num.size();

    std::set<int> even, odd;
    for (int i = 0; i < n; i++)
    {
        if (i)
        {
            if (num[i] & 1)
                odd.insert(i);
            else
                even.insert(i);
        }
    }

    int left = 0, inox = num[0], result = 0;
    for (int i = 1; i < n; i++)
    {
        if (even.count(i) == false && odd.count(i) == false)
        {
            left--;
            continue;
        }

        if ((inox & 1) && (num[i] & 1))
        {
            result += abs(i - *even.begin());
            result -= left;

            left++;
            even.erase(*even.begin());
        }
        else if (inox % 2 == 0 && num[i] % 2 == 0)
        {
            result += abs(i - *odd.begin());
            result -= left;

            left++;
            odd.erase(*odd.begin());
        }

        inox = num[i];

        even.erase(i);
        odd.erase(i);
    }

    return result;
}

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> num(n), temp;

        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin >> num[i];

            if (num[i] & 1)
                odd++;
            else
                even++;
        }

        if ((n & 1) && abs(even - odd) != 1)
        {
            std::cout << "-1\n";
            continue;
        }

        if ((n % 2 == 0) && abs(even - odd) != 0)
        {
            std::cout << "-1\n";
            continue;
        }

        temp = num;
        reverse(temp.begin(), temp.end());

        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (num[i] != num[n - 1 - i])
                ok = false;
        }

        int count1 = foo(num), count2 = foo(temp);
        if (std::min(count1, count2) != 0 && ok)
        {
            count1 = count2 = (n & 1) ? (n / 2) : (n / 2) - 1;
        }

        if (std::min(count1, count2) == -1)
            std::cout << std::max(count1, count2) << '\n';
        else
            std::cout << std::min(count1, count2) << '\n';
    }
}