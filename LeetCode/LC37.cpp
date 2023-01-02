#include <bits/stdc++.h>
using namespace std;

void write(std::vector<std::vector<int>> &num)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            std::cout << num[i][j] << " ";
        }

        std::cout << '\n';
    }
}

int getDesign(std::vector<std::vector<int>> &num, std::vector<std::set<int>> &row, std::vector<std::set<int>> &col, int i)
{
    if (i >= num.size())
    {
        write(num);
        return 1;
    }

    for (auto p : row[i])
        std::cout << p << " ";
    std::cout << '\n';

    for (int j = 0; j < 9; j++)
    {
        if (num[i][j] == 0)
        {
            bool ok = true;
            for (int k = 1; k <= 9; k++)
            {
                if (row[i].count(k) || col[j].count(k))
                    continue;

                num[i][j] = k;
                row[i].insert(k);
                col[j].insert(k);

                if (getDesign(num, row, col, i))
                    return 1;
                ok = false;

                num[i][j] = 0;
                row[i].erase(k);
                col[j].erase(k);
            }

            if (ok)
                return 0;
        }
    }

    if (getDesign(num, row, col, i + 1))
        return 1;

    return 0;
}

int main()
{
    std::vector<std::vector<int>> num;
    std::vector<std::set<int>> row(9), col(9);

    for (int i = 0; i < 9; i++)
    {
        std::vector<int> temp(9);
        for (int j = 0; j < 9; j++)
        {
            std::cin >> temp[j];

            if (temp[j])
            {
                row[i].insert(temp[j]);
                col[j].insert(temp[j]);
            }
        }

        num.push_back(temp);
    }

    getDesign(num, row, col, 0);
}