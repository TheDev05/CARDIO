/* Longest Subarray */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        vector<int> num;
        for (int i = 0; i < n; i++)
        {
            int val;
            std::cin >> val;

            if (val % 2 == 0)
            {
                val = 0;
            }

            num.push_back(val);
        }

        int k = 0;
        map<int, int> dot;
        dot[0] = -1;

        int result = INT_MIN, sum = 0;
        for (int i = 0; i < num.size(); i++)
        {
            sum += num[i];

            if (dot.count(sum - k))
            {
                result = std::max(result, (i - dot[sum - k]));
            }
            else
                dot[sum] = i;
        }

        if (result == INT_MIN)
        {
            result = 0;
        }

        std::cout << result << '\n';
    }
}