#include <bits/stdc++.h>
using namespace std;

int getCount(std::vector<std::vector<int>> &num, int vacant, int i, int j, int val, int &count)
{
    if (num[i][j] == -1)
        return 0;

    if (num[i][j] == 0)
        vacant--;

    if (num[i][j] == 2)
    {
        if (vacant == 0)
            count++;

        return 0;
    }

    if (i < num.size() - 1)
    {
        int temp = num[i][j];
        num[i][j] = -1;

        getCount(num, vacant, i + 1, j, 0, count);
        num[i][j] = temp;
    }

    if (i > 0)
    {
        int temp = num[i][j];
        num[i][j] = -1;

        getCount(num, vacant, i - 1, j, 0, count);
        num[i][j] = temp;
    }

    if (j < num[0].size() - 1)
    {
        int temp = num[i][j];
        num[i][j] = -1;

        getCount(num, vacant, i, j + 1, 0, count);
        num[i][j] = temp;
    }

    if (j > 0)
    {
        int temp = num[i][j];
        num[i][j] = -1;

        getCount(num, vacant, i, j - 1, 0, count);
        num[i][j] = temp;
    }

    return 0;
}

int main()
{
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> num;

    int vacant = 0, count = 0;
    int left = 0, right = 0;

    for (int i = 0; i < n; i++)
    {
        std::vector<int> temp(m);
        for (int j = 0; j < m; j++)
        {
            std::cin >> temp[j];

            if (temp[j] == 0)
                vacant++;
                
            if (temp[j] == 1)
            {
                left = i;
                right = j;
            }
        }

        num.push_back(temp);
    }

    getCount(num, vacant, left, right, 0, count);

    std::cout << count << '\n';
}