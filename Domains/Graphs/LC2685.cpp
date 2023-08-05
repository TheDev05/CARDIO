#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, vertex;
    std::cin >> vertex >> n;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp(2);
        std::cin >> temp[0] >> temp[1];

        num.push_back(temp);
    }

    std::vector<int> inox[vertex];
    for (int i = 0; i < n; i++)
    {
        inox[num[i][0]].push_back(num[i][1]);
        inox[num[i][1]].push_back(num[i][0]);
    }

    std::vector<int> visited(vertex, 0);

    int count = 0;
    for (int i = 0; i < vertex; i++)
    {
        if (visited[i] == 0)
        {
            std::cout << i << '\n';
            std::queue<int> temp;

            temp.push(i);
            visited[i] = 1;

            bool ok = false;
            while (temp.size())
            {
                int local = temp.front();
                temp.pop();

                for (auto j : inox[local])
                {
                    if (visited[j] && local != j)
                        ok = true;
                    else if (visited[j] == 0)
                    {
                        temp.push(j);
                        visited[j] = 1;
                    }
                }
            }

            if (ok)
                count++;
        }
    }

    std::cout << count;
}