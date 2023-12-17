#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(n, 0));
    for (auto &i : num)
    {
        for (auto &j : i)
            std::cin >> j;
    }

    int count = 0;
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = 0; j < num.size(); j++)
        {
            if (num[0][i] == num[j][0])
            {
                bool ok = true;
                for (int k = 0; k < num.size(); k++)
                {
                    if (num[k][i] != num[j][k])
                    {
                        ok = false;
                        break;
                    }
                }

                if (ok)
                    count++;
            }
        }
    }

    std::cout << count;
}