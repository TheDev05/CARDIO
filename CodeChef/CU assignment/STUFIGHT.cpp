/* Students and Fighting */

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

            num.push_back(val);
        }

        sort(num.begin(), num.end());

        if (num[n - 1] == num[n - 2])
        {
            std::cout << "fight:(\n";
        }
        else
            std::cout << "peace:)\n";
    }
}