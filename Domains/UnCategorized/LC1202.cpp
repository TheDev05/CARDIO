#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> num(n, std::vector<int>(2, 0));
    for (int i = 0; i < n; i++)
    {
        std::cin >> num[i][0] >> num[i][1];
    }

    std::string text;
    std::cin >> text;

    std::vector<int> adj[text.size()];
    for (int i = 0; i < num.size(); i++)
    {
        adj[num[i][1]].push_back(num[i][0]);
        adj[num[i][0]].push_back(num[i][1]);
    }

    std::vector<int> vis(text.size(), 0);
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == 0)
        {
            std::queue<int> inox;

            inox.push(i);
            vis[i] = 1;

            std::set<char> chars;
            std::set<int> index;

            while (inox.size())
            {
                int it = inox.front();
                inox.pop();

                index.insert(it);
                chars.insert(text[it]);

                for (auto j : adj[it])
                {
                    if (vis[j] == 0)
                    {
                        vis[j] = 1;
                        inox.push(j);
                    }
                }
            }

            auto it = index.begin();
            for (auto p : chars)
            {
                text[*it] = p;
                it++;
            }
        }
    }

    std::cout << text;
}