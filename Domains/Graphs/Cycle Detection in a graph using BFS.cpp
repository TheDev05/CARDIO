#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num[n];
    for (int i = 0; i < n; i++)
    {
        int temp;
        std::cin >> temp;

        std::vector<int> inox(temp);
        for (auto &j : temp)
            std::cin >> j;

        num[i] = temp;
    }

    std::vector<int> vis(n, 0);
    std::queue<int> inox;

    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            inox.push(i);
            vis[i] = 1;

            while (inox.size())
            {
                int local = inox.front();
                inox.pop();

                int count = 0;
                for (auto i : num[local])
                {
                    if (vis[i] == 0)
                    {
                        vis[i] = 1;
                        inox.push(i);
                    }
                    else
                        count++;
                }

                if (count > 1)
                    ok = true;
            }
        }
    }

    std::cout << ok;
}