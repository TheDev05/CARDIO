#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    // if (is_sorted(num.begin(), num.end()))
    //     return {};

    std::vector<int> res;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num[j] == n - i)
            {
                reverse(num.begin(), num.begin() + j + 1);
                reverse(num.begin(), num.begin() + (n - i));

                res.push_back(j + 1);
                res.push_back(n - i);

                break;
            }
        }
    }

    for (auto i : num)
        std::cout << i << " ";
}