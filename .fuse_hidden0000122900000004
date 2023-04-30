#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    std::cin >> n >> a >> b;

    std::vector<int> num(n);
    int left1 = 0, left2 = 0, right1 = 0, right2 = 0;

    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i];

        if (num[i] % b == 0)
        {
            right1++;
            if (num[i] % a == 0)
                right2++;
        }
        else if (num[i] % a == 0)
        {
            left1++;
            if (num[i] % b == 0)
                left2++;
        }
    }

    for (int i = 0; 1; i++)
    {
        if (i & 1)
        {
            if (left2 == 0 && right1 == 0)
            {
                std::cout << "CHARLIE\n";
                return 0;
            }

            if (left2 > 0)
                left2--;
            else
                right1--;
        }
        else
        {
            if (right2 == 0 && left1 == 0)
            {
                std::cout << "DAVID\n";
                return 0;
            }

            if (right2 > 0)
                right2--;
            else
                left1--;
        }
    }
}