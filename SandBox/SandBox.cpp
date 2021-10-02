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

        map<int, int> num;
        for (int i = 0; i < n; i++)
        {
            int val;
            std::cin >> val;

            num[val]++;
        }

        for (auto i : num)
            std::cout << i.second << " ";

        int key = 0;
        for (int i = 1; i <= 6; i++)
        {
            if (num[i] != 2)
            {
                std::cout << "no\n";
                key = 1;

                break;
            }
        }

        if (key)
        {
            continue;
        }
        else if (num[7] == 1)
        {
            std::cout << "yes\n";
        }
    }
}