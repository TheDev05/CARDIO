#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    std::cin >> n;

    std::vector<int> num(n);
    for (auto &i : num)
        std::cin >> i;

    int start;
    std::cin >> start;

    std::vector<int> vis(n, 0);
    std::queue<int> inox;

    inox.push(start);
    vis[start] = 1;

    while (inox.size())
    {
        int index = inox.front();
        inox.pop();

        int right = index + num[index];
        int left = index - num[index];

        if (right < n && vis[right] == 0)
        {
            if (num[right] == 0)
                break;

            inox.push(right);
            vis[right] = 1;
        }

        if (left >= 0 && vis[left] == 0)
        {
            if (num[left] == 0)
                break;

            inox.push(left);
            vis[left] = 1;
        }
    }

}