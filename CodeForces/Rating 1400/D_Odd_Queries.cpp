#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, q;
        std::cin >> n >> q;

        std::vector<int> num(n);
        for (auto &i : num)
            std::cin >> i;

        int sum = accumulate(num.begin(), num.end(), 0);
        std::map<int, int> data;

        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            temp += num[i];
            data[i] = temp;
        }

        while (q--)
        {
            int l, r, k;
            std::cin >> l >> r >> k;

            l--;
            r--;

            int inox = (sum - (data[r] - data[l]) + num[l]) + (k * ((r - l) + 1));

            if (inox & 1)
                std::cout << "YES\n";
            else
                std::cout << "NO\n";
        }
    }
}