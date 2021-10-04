#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, key = 0, mid;
        std::cin >> n;

        vector<int> num1, num2;

        for (int i = 0; i < n; i++)
        {
            int val;
            std::cin >> val;

            if (i < n / 2)
            {
                num1.push_back(val);
            }
            else if (i > n / 2)
            {
                num2.push_back(val);
            }
            else if (i == n / 2)
            {
                if (n % 2 != 0)
                {
                    mid = val;
                }
                else
                    num2.push_back(val);
            }

            if (!(val >= 1 && val <= 7))
            {
                key = 1;
            }
        }

        if (n % 2 != 0)
        {
            if ((mid - num1[num1.size() - 1]) != 1 && (mid - num1[num1.size() - 1]) != 0)
            {
                key = 1;
            }
        }

        reverse(num2.begin(), num2.end());

        if (num1 != num2)
        {
            key = 1;
        }

        if (key)
        {
            std::cout << "no\n";
            continue;
        }

        int temp = 0, count = 1;
        for (int i = 0; i < num1.size(); i++)
        {
            if (num1[i] != temp)
            {
                if (num1[i] != count)
                {
                    key = 1;
                    break;
                }
                else
                    count++;
            }

            temp = num1[i];
        }

        if (key)
        {
            std::cout << "no\n";
            continue;
        }

        std::cout << "yes\n";
    }
}