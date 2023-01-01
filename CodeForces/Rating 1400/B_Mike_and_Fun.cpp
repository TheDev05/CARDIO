#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    std::cin >> n >> m >> k;

    std::vector<std::vector<int>> num;
    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp(m);
        for (int j = 0; j < m; j++)
        {
            std::cin >> temp[j];
        }

        num.push_back(temp);
    }

    std::map<int, int> data;
    std::map<int, int, greater<>> inox;
    for (int i = 0; i < n; i++)
    {
        int max = 0;
        for (int j = 0; j < m; j++)
        {
            if (num[i][j] == 1)
            {
                int count = 0, index = j;
                while (num[i][index] == 1 && index < m)
                {
                    index++;
                    count++;
                }

                j = index - 1;
                max = std::max(max, count);
            }
        }

        data[i] = max;
    }

    for (auto i : data)
        inox[i.second]++;

    while (k--)
    {
        int left, right;
        std::cin >> left >> right;

        left--;
        right--;

        num[left][right] = (num[left][right] == 1) ? 0 : 1;

        int max = 0;
        for (int i = 0; i < m; i++)
        {
            if (num[left][i] == 1)
            {
                int index = i, count = 0;
                while (num[left][index] == 1 && index < m)
                {
                    index++;
                    count++;
                }

                i = index - 1;
                max = std::max(max, count);
            }
        }

        int temp = max;
        int val = data[left];

        data[left] = max;

        inox[val]--;
        if (inox[val] == 0)
            inox.erase(val);

        inox[temp]++;

        std::cout << inox.begin()->first << '\n';
    }
}