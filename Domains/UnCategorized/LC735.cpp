#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    std::vector<int> inox;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < 0)
        {
            bool ok = true;
            while (inox.size() && inox.back() > 0)
            {
                if (std::abs(num[i]) > inox.back())
                    inox.pop_back();
                else if (std::abs(num[i]) == inox.back())
                {
                    inox.pop_back();
                    ok = false;

                    break;
                }
                else
                    break;
            }

            if (ok && ((inox.size() && inox.back() < 0) || inox.empty()))
                inox.push_back(num[i]);
        }
        else
            inox.push_back(num[i]);
    }

    for (auto i : inox)
        std::cout << i << " ";
}