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

        int temp = n;
        if (n & 1)
            temp++;

        std::vector<std::pair<int, int>> num;

        int inox = 1, val = 3 * n;
        for (int i = 0; i < temp / 2; i++)
        {
            num.push_back({inox, val - inox});
            inox += 3;
        }

        std::cout << num.size() << '\n';
        for (auto i : num)
            std::cout << i.first << " " << i.second << '\n';
    }
}